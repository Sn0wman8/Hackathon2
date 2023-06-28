#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "weapon.h"

using namespace std;

Weapon::Weapon(){
	head = nullptr;
	selectedWeapon = nullptr;
	weaponCount = 0;
	
	addItem("Battle axe", 15);
	addItem("Dagger", 12);
	addItem("Hunter Bow", 15);
}

Weapon::~Weapon() {
    while (head) {
        Wea* temp = head;
        head = head->next;
        delete temp;
    }
}

void Weapon::addItem(string name, int attackNumber){
    Wea* newWeapon = new Wea;
    newWeapon->name = name;
    newWeapon->attackNumber = attackNumber;
    newWeapon->next = nullptr;

    if (!head) {
        head = newWeapon;
        selectedWeapon = newWeapon;
    } else {
        Wea* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newWeapon;
    }

    weaponCount++;
}

string Weapon::getName() const {
	return selectedWeapon->name;
}

int Weapon::getDamage(){
	return selectedWeapon->attackNumber;
}

void Weapon::randomWeapon(){
    if (!head) {
    	string inputName;
    	int damageNum;
        cout << "Please add an item." << endl;
        cout << "Item name: " << endl;
        getline(cin,inputName);
        cout << "Damage: " << endl;
        cin >> damageNum;
        addItem(inputName, damageNum);
        selectedWeapon = head;
        return;
	} else {
        // Seed the random number generator based on the current time
        srand(static_cast<unsigned int>(time(0)));
        
        // Generate a random index
        int randomIndex = rand() % weaponCount;
        
        Wea* temp = head;
        for (int i = 0; i < randomIndex; ++i) {
            temp = temp->next;
        }
        selectedWeapon = temp;
    }

    // Generate a random index
    int randomIndex = rand() % weaponCount;

    Wea* temp = head;
    for (int i = 0; i < randomIndex; ++i) {
        temp = temp->next;
    }
    selectedWeapon = temp;
}

