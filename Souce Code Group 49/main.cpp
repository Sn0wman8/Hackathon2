#include <iostream>
#include <string>
#include "player.h"
#include "gameplay.h"

using namespace std;

int main(){
	string name;
	int choice;	

cout << "_____________________________________________________"	<< endl;                                             
cout << "|      @@@@@@@@                       @@@@@@@@      |" << endl;
cout << "|    @@@@.                                 @@@@@    |" << endl;
cout << "|   @@@@@                                   @@@@@   |" << endl;
cout << "|   @@@@@                 @                 @@@@@   |" << endl;
cout << "|   @@@@@             @@@@@@@@@             @@@@@   |" << endl;
cout << "|   @@@@@@@@#  @@@  @@@@@@@@@@@@@  @@@  &@@@@@@@@   |" << endl;
cout << "|   @@@@@@@@@  @@@@  &@@@   @@@/  @@@@ #@@@@@@@@@   |" << endl;
cout << "|     @@@@@@@@ #@@@@            *@@@@. @@@@@@@@     |" << endl;
cout << "|         @@@@  @@@@@@@  @@@  @@@@@@@  @@@&         |" << endl;
cout << "|               @@   .@@@@@@@@@    @@               |" << endl;
cout << "|               @@       @@@       @@               |" << endl;
cout << "|              @@@@@             @@@@@              |" << endl;
cout << "|             @@@@@@@@@@     @@@@@@@@@@             |" << endl;
cout << "|               @@@@@@@@     @@@@@@@@               |" << endl;
cout << "|          %@@    @@@@@@     @@@@@#   /@@*          |" << endl;
cout << "|         @@@@@@@    @@@.   #@@@    @@@@@@@         |" << endl;
cout << "|            @    @    @@   @@    @    @            |" << endl;
cout << "|___________________________________________________|" << endl;
cout << endl;
	cout << "               Welcome to NUB RPG!" << endl;
cout << endl;
	do{
		cout << "        Enter the number next to your choice" << endl;
		cout << "             ======== Main Menu ========" << endl;
		cout << "                   1. New Game        " << endl;
		cout << "                   2. Load Game  " << endl;
		cout << "                   3. Exit" << endl;
		
		cin >> choice;
		switch(choice){
			case 1:{
				choice = 3;
				cout << "Enter your username: ";
				cin.ignore();
				getline(cin,name); 			
				cout << "Congratulations on creating your character!" << endl;
			    cin.get();
			    cout << "Where's the fun if everyone has the same start?" << endl;
			    cin.get();
			    cout << "Now you will decide the fate of your character!" << endl;
			    cin.get();
			    cout << "Rolling for bonus hp and atk stat..." << endl;
			    cin.get();
			    Gameplay gameplay(name);
			    break;
			}
			case 2:{
				choice = 3;
				Gameplay gameplay(1);
				break;
			}
			case 3:{
				cin.ignore();
				cout << "QAQ why would you press 3 ?" << endl;
				cin.get();
				cout << "Exiting application...." << endl;
				break;
			}
			default:
				cout << "If I have hands and a stick, I'd would have bonked you" << endl;
				cout << "Read the Menu !!!" << endl;
		}
	
	}while(choice!=3);

	return 0;
}
