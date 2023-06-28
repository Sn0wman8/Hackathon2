#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>

#include "player.h"

using namespace std;

Player::Player(){
	name = "";
    hp = 100;
    atk = 10;
}

Player::Player(string n) {
    name = n;
    hp = 100;
    atk = 10;
    rollhp();
    rollatk();
    display();
}

Player::Player(int h, int a, string n) {
    name = n;
    hp = h;
    atk = a;
    display();
}

void Player::rollhp() {
    int bonus;
    srand(time(0));
    bonus = rand() % 101;
    if (bonus == 100) {
        cout << "Congratulations! You've rolled the best hp stat!" << endl;
    } else if (bonus == 0) {
        cout << "Damn! I'd would be creating a new character if I were you" << endl;
    } else {
        cout << "Congratulations! You've added " << bonus << " to your base hp" << endl;
    }

    hp += bonus;
    
}

void Player::rollatk() {
    int bonus;
    srand(time(0));
    bonus = rand() % 21;
    if (bonus == 20) {
        cout << "Congratulations! You've rolled the best atk stat!" << endl;
    } else if (bonus == 0) {
        cout << "Damn! I'd would be creating a new character if I were you" << endl;
    } else {
        cout << "Congratulations! You've added " << bonus << " to your base atk" << endl;
    }

    atk += bonus;
    cin.get();
    
}

void Player::display(){
    cout << "**********************************************" << endl;
    cout << "      Current stat: " << hp << "hp" << " " << atk << "atk      " << endl;
//	cout << "      ";
//	inventory.displayEquippedWeapon();
	cout << "**********************************************" << endl;
	
}

void Player::playerStat(){
	
	string a =getName();
	int b = gethp();
	int c = getatk();
	
	ofstream file("stat.txt", ios::trunc);
	if (file.is_open()) {
        file << a << "\n";
        file << b << "\n";
        file << c << "\n";
        file.close();
        cout << "Stats saved successfully." << endl;
    }
    else{
    	cout << "Error! Unable to open file" << endl;
	}
}

void Player::loadStat(){
  ifstream file("stat.txt");
	if (file.is_open()) {
            string line;
            int a;
            int b;
			getline(file, line);
            setName(line);
            file >> a;
			sethp(a);
			file >> b;
			setatk(b);
			file.close();
            }
    		else {
            cout << "Error! Unable to open file" << endl;
        }
}

string Player::getName() const {
    return name;
}

int Player::getatk(){
    return atk;
} 

int Player::gethp(){
	return hp;
}

void Player::sethp(int h){
	hp = h;
}

void Player::setatk(int a){
	atk= a;
}

void Player::bonusStat(){
	atk += 4;
	hp += 20;
	
}

void Player::setName(string n){
	name =n;
}



