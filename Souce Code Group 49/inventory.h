#ifndef inventory_h
#define inventory_h

#include <iostream>
#include <string>


using namespace std;

class Inventory{
	private:
		struct Inv
		{
			string inventoryInfo; //store inventory information
			int attack; //store equipment damage	
			Inv *next;		
		};
		
		Inv *head;
		Inv *equippedWeapon;
		int num;
	
	public: 
		Inventory(); //constructor
		~Inventory(); //destructor
		void addWeapon(string, double); //add weapon
		void printInfo(); //print all the equipment information
		void equipWeapon(string); //equip weapon
		void unequipWeapon(); //unequip weapon
		void throwWeapon(string); //destroy weapon
		void displayEquippedWeapon(); //display equipped weapon
		void saveInv();
    	void loadInv();
};

#endif
