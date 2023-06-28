#include <iostream>
#include <string>
#ifndef gameplay_h
#define gameplay_h

#include "tower.h"
#include "player.h"
#include "inventory.h"
#include "weapon.h"

class Gameplay{
	private:
		string n; //pass name function
		int turn = 0; //turn
		int options; //attack options
		Player player; 
		Tower tower;
		Inventory inventory;
		Weapon weapon;

		bool nextFloor = false;
		
	public:
		Gameplay(int);
       	Gameplay(string);// battle phase
		void turnCounter(); // turn counter
		void playerturn(int); //to define enemy attack
    	void mobturn(int); // monster attack

		
};

#endif
