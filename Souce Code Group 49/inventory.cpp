#include <iostream>
#include <string>
#include <fstream>

#include "inventory.h"

using namespace std;

Inventory::Inventory(){
        head = nullptr;
        equippedWeapon = nullptr;
} // make sure both pointer point to null

Inventory::~Inventory(){
    Inv* current = head;
    while (current != nullptr) {
        Inv* temp = current;
        current = current->next;
        delete temp;
    }
} //make sure to delete all the information

void Inventory::addWeapon(string name, double damage){
	num++;
    Inv* newWeapon = new Inv;
    newWeapon->inventoryInfo = name;
    newWeapon->attack = damage;
    newWeapon->next = nullptr;

    if (head == nullptr) {
        head = newWeapon;
    } else {
        Inv* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newWeapon;
    }
} //add weapon based on the info from the Monster class

void Inventory::printInfo() {
    if (head == nullptr) {
        cout << "Inventory is empty." << endl;
    } else {
        Inv* current = head;
        cout << "Weapon Inventory:" << endl;
        cout << "-----------------" << endl;
        while (current != nullptr) {
            cout << "Name: " << current->inventoryInfo << ", Damage: " << current->attack << endl;
            current = current->next;
        }
        cout << "-----------------" << endl;
    }
} //display what we have in the inventory

void Inventory::equipWeapon(string name) {
    if (head == nullptr) {
        cout << "Inventory is empty." << endl;
        return;
    }

    Inv* current = head;
    while (current != nullptr) {
        if (current->inventoryInfo == name) {
            equippedWeapon = current;
            cout << "Weapon equipped: " << current->inventoryInfo << endl;
            return;
        }
        current = current->next;
    }

    cout << "Weapon not found in inventory." << endl;
} //the setting to equip weapon

void Inventory::unequipWeapon(){
	if (equippedWeapon == nullptr) {
        cout << "No weapon is equipped." << endl;
        return;
	}
    else{
    	equippedWeapon = nullptr;
    	cout << "Weapon is in the inventory." << endl;
    }
}

void Inventory::throwWeapon(string name) {
    if (head == nullptr) {
        cout << "Inventory is empty." << endl;
        return;
    }

    if (head->inventoryInfo == name) {
        Inv* temp = head;
        head = head->next;
        delete temp;
        cout << "Weapon thrown: " << name << endl;
        return;
    }

    Inv* current = head;
    while (current->next != nullptr) {
        if (current->next->inventoryInfo == name) {
            Inv* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Weapon thrown: " << name << endl;
            return;
        }
        current = current->next;
    }

    cout << "Weapon not found in inventory." << endl;
} //remove certain weapon from our inventory

void Inventory::displayEquippedWeapon(){
        if (equippedWeapon == nullptr) {
            cout << "No weapon equipped." << endl;
        } else {
            cout << "Equipped Weapon: " << equippedWeapon->inventoryInfo << ", Damage: " << equippedWeapon->attack << endl;
        }
} //display what we have equipped, normally will be used by the character class


void Inventory::saveInv(){
    Inv *current = head;
    ofstream file("inventory.txt");
    if (file.is_open()) {
        if(equippedWeapon!=nullptr){
            file << "Equipped Weapon: " << equippedWeapon->inventoryInfo << "\n";    
        }
        while(current != nullptr){
            file << current->inventoryInfo << '\n';
            file << current->attack << '\n';  
            current = current->next;
        }
        file.close();
        cout << "Inventory saved successfully." << endl;
    }
    else{
        cout << "Error! Unable to open file" << endl;
    }
}


void Inventory::loadInv(){
	ifstream file("inventory.txt");
	string line;
	if(file.is_open()){
        while (getline(file, line)) {
            if (line.find("Equipped Weapon: ") != string::npos) {
                // Extract and set the equipped weapon
                string equippedWeaponInfo = line.substr(line.find(": ") + 2);
                equipWeapon(equippedWeaponInfo);
            } 
			else {
                // Extract inventory information and attack
                string inventoryInfo = line;
                getline(file, line);
                int attack = stoi(line);
                addWeapon(inventoryInfo, attack);
            }
        }

        file.close();
        cout << "Inventory loaded successfully." << endl;
  	}
	else {
        cout << "Error! Unable to open file." << endl;
    }
}













