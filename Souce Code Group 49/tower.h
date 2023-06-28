#ifndef tower_h
#define tower_h

#include <iostream>
#include <string>

using namespace std;

class Tower{
	private:
		struct floor{
			int lvl; //floor level
			string mob; //monster name
			int monHP; //monster health point
			int monATK; //monster attack
			floor *next; 
		};
		
		floor *current; //current level
		floor *bottom; //first level

	public:

		Tower();
		~Tower();
		void addfloor(int, string, int, int); //level, name, monHP, monATK
		void nextfloor(); //move to next point through LinkedList pointer
		void setmobhp(int); //set monster health point
		void setmobatk(int); //set monster attack
		int getmobhp(); //get monster healthpoint
		int getmobatk(); //get monster attack
		void display(); //display tower level information
		void startTower(); //start level one
		bool bossroom();
		void savefloor();
		void loadfloor();
		void setfloor(int);
		int getfloor();
};

#endif
