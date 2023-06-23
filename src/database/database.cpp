#include "database.h"

namespace database{

// help function
int level2ascend(level_t level) {
    int ascend = (level - 20)/10 + 1;
    if (ascend <= lc_ac_max){
	return ascend;
    } else {
	return lc_ac_max;
    }
}

bool isLevelValid(level_t level){
    return ((level <= lc_lv_max) && (level > 0));
}


LightCone::LightCone(){
    _name = "Empty Light Cone";
    _cn_name = "空光锥";
    _level = 1;
}

void LightCone::set_level(level_t level){
    if (isLevelValid(level)) {
	_level = level;
	_ascend = level2ascend(level);
    } else {
	std::cerr << "bad level for Light Cone\n";
    }
    return;
}

LightCone empty_light_cone = LightCone();


Character::Character(std::string& name, std::string& cn_name, statv_t base_ATK, statv_t base_DEF, statv_t base_HP, statv_t base_SPD):light_cone{empty_light_cone}, _name{name}, _cn_name{cn_name}, _base_ATK{base_ATK}, _base_DEF{base_DEF}, _base_HP{base_HP}, _base_SPD{base_SPD}{
}

void Character::set_level(level_t level){
    if (isLevelValid(level)) {
	_level = level;
	_ascend = level2ascend(level);
    } else {
	std::cerr << "bad level for Light Cone\n";
    }
    return;
}

void Character::print(std::ostream& o){
    o << "";
}
};
