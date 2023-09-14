#include <vector>
using namespace std;
class Enemy;

class Charactor;

class Env;

class Status{
	vector<Enemy> enemies;
	vector<Charactor> charactors;
	Env env();
};

static vector<vector<Status>> StatusMatrix;

class Transis;
