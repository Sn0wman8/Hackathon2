#ifndef weapon_h
#define weapon_h

#include <iostream>
#include <string>

using namespace std;

class Weapon{
	private:
		struct Wea{
			string name; //the weapon name
			int attackNumber; //the damage of the weapon
			Wea *next;
		};
		Wea *head;
		Wea *selectedWeapon; //the pointer that will point to our weapon
		int weaponCount; //added items' count
		
	public:
		Weapon();
		~Weapon();
		void addItem(string, int); //add item into the weapon list
		string getName() const; //return name for the inventory
		int getDamage();
		void randomWeapon(); //randomized the weapon to drop by the enemy
};


#endif
