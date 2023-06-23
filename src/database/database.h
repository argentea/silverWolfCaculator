#pragma once

#include <istream>
#include <string>
#include <iostream>

namespace database {

typedef double statv_t;
typedef int level_t;

// character_level_coefficient
// character_ascend_coefficient
const statv_t ch_lv_co = 0.05;
const statv_t ch_ac_co = 0.4;
// There're 6 gaps;
const statv_t ch_lv_max = 80;
const statv_t ch_ac_max = 6;

// light_cone_level_coefficient
// light_cone_ascend_coefficient
const statv_t lc_lv_co = 0.05;
const statv_t lc_ac_co = 0.4;
// There're 6 gaps;
const statv_t lc_lv_max = 80;
const statv_t lc_ac_max = 6;


class LightCone {
  private:
    std::string _name;
    std::string _cn_name;
    statv_t _base_ATK;
    statv_t _base_DEF;
    statv_t _base_HP;
    level_t _level;
    level_t _ascend;
  public:
    // Init without level
    LightCone(std::string& name, std::string& cn_name, statv_t base_ATK,
              statv_t base_DEF, statv_t base_HP);
    LightCone();

    // We set ascend as biggest as possible for current level.
    void set_level(level_t level);
    // This function should be used only on gap level.
    void set_ascend(level_t ascend);

};

extern LightCone empty_light_cone;

class Character {
  private:
    std::string _name;
    std::string _cn_name;
    statv_t _base_ATK;
    statv_t _base_DEF;
    statv_t _base_HP;
    statv_t _base_SPD;
    level_t _level;
    level_t _ascend;
    LightCone& light_cone;
  public:
    Character(std::string& name, std::string& cn_name, statv_t base_ATK,
              statv_t base_DEF, statv_t base_HP, statv_t base_SPD);

    // We set ascend as biggest as possible for current level.
    void set_level(level_t level);
    // This function should be used only on gap level.
    void set_ascend(level_t ascend);
    
    void print(std::ostream& o = std::cout);
};


};
