#include <iostream>
#include <string>
#include "database.h"

using namespace std;

int main(){
    const char tool_name[] = "one_hit_kill";
    cout << "Call " << tool_name << endl;

    using namespace database;
    string name("aa");
    string cn_name("安安");
    Character sdf(name, cn_name, 32, 23, 123, 235);
    

    return 0;
}
