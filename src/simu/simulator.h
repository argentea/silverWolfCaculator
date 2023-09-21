#include "global.h"
using namespace std;

class Triger{
public:
	bool outdated;
};

class Enemy{
private:
	list<Triger*> rela_trigers;
};

class Charactor{
public:
private:
	v_t speed;
	list<Triger*> rela_trigers;

	void apply_trigers(Triger& triger);
	void refresh();
};

class Env{
private:
	list<Triger*> rela_trigers;

};

class Status{
public:
	Status();
private:
	vector<Enemy> enemies;
	vector<Charactor> charactors;
	list<Triger> trigers;
	Env env();
	Status* pre;
	vector<Status*> app;

	void apply_trigers(Triger& triger);
};

static vector<vector<Status>> StatusMatrix;
