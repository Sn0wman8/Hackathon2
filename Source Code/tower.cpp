#include "tower.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Tower::Tower() {
    current = nullptr;
    bottom = nullptr;
    
    // Add default floors
    addfloor(1, "Goblin", 50, 10);
    addfloor(2, "Orc", 100, 20);
    addfloor(3, "Troll", 200, 30);
    
    startTower(); // Call the startTower function
}

Tower::~Tower(){
	floor *temp;
	while(bottom){
		temp = bottom;
		bottom = bottom->next;
		delete temp;
	}
} //Delete all the lindked list
 	

void Tower::addfloor(int lvl, string mob, int monHP, int monATK){
	floor *newFloor = new floor;
	newFloor->lvl = lvl;
	newFloor->mob = mob;
	newFloor->monHP = monHP;
	newFloor->monATK = monATK;
	newFloor->next = nullptr;

	if(bottom == nullptr){
		bottom = newFloor;
		current = newFloor;
	}
	else{
		current->next = newFloor;
		current = newFloor;
	}
} //function to set up the dungeon

void Tower::nextfloor(){
	if(current != nullptr)
		current = current->next;
} //function to send the player to next floor

void Tower::display(){
	if(current->next){
		cout << "Level: " << current->lvl << endl;
		cout << "Monster: " << current->mob << endl;
		cout << "Monster HP: " << current->monHP << endl;
		cout << "Monster ATK: " << current->monATK << endl;
		cout << "------------------------" << endl;
	}
	else{
		cout << "Congratulations on winning clearing the past floors" << endl;
		cin.get();
		cout << "Entering Final Boss Room..." << endl;
		cin.get();
		cout << "Level: " << current->lvl << endl;
		cout << "Monster: " << current->mob << endl;
		cout << "Monster HP: " << current->monHP << endl;
		cout << "Monster ATK: " << current->monATK << endl;
		cout << "------------------------" << endl;
	}
} //display current enemy's stat

void Tower::setmobhp(int hp){
	if(current != nullptr)
		current->monHP = hp;
} //set the monster health point

void Tower::setmobatk(int atk){
	if(current != nullptr)
		current->monATK = atk;
} //set the monster attack

int Tower::getmobhp(){
	if(current != nullptr)
		return current->monHP;
	else
		return 0;
} //get the monster health point

int Tower::getmobatk(){
	if(current != nullptr)
		return current->monATK;
	else
		return 0;
} //get the monster attack

void Tower::startTower() {
    current = bottom; // Set the current pointer to the bottom floor
} //ensure the start of the game to be at the first level

bool Tower::bossroom(){
	if (current->next){
		return false;
	}
	else
		return true;
}

void Tower::savefloor(){
	ofstream file("tower.txt", ios::trunc);
    if (file.is_open()) {
        file << current->next->lvl;
        file.close();
        cout << "Tower progress saved successfully" << endl;
    }
    else
    	cout << "Error! Unable to open file." << endl;
    
}

void Tower::loadfloor(){
	int lvl;
	ifstream file("tower.txt");
	if (file.is_open()) {
		file >> lvl;
		file.close();
	}
	else 
		cout << "Error! Unable to open file." << endl;
		
	while(current->lvl != lvl){
		
		current = current->next;
	}
		
}

void Tower::setfloor(int lf){
	while(current->lvl!= lf){
		current = current -> next;
	}
}	

int Tower::getfloor(){
	return current->lvl;
}
