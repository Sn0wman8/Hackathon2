#ifndef player_h
#define player_h

#include <iostream>
#include <string>
#include <fstream>

#include "inventory.h"

using namespace std;

class Player{
	private:
  		int hp; //health point
		int atk; //damage value
   		string name; //character's name
   		Inventory inventory;
   		

	public:
  		Player(int, int, string); // Default constructor
 		Player(string);
 		Player();
  		void rollhp();
 		void rollatk();
		void display();
		string getName() const; // Getter for name
 		int getatk(); // Getter for atk
 		int gethp();
  		void sethp(int);
  		void setatk(int);
  		void bonusStat();
  		void setName(string); // Setter for name
  		void playerStat();
  		void loadStat();
};

#endif

