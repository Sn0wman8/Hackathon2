#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "gameplay.h"

using namespace std;

Gameplay::Gameplay(int):player(){
	
	Weapon weapon;
	Inventory inventory;
	string weaName;
	
	player.loadStat();
	inventory.loadInv();
	tower.loadfloor();
	
	int midchoice = 0;
	char decision;
	int choice = 0;
	
    cout << "Entering tower...." << endl;
    cout << "Brace yourself!" << endl;
    cin.get();
	tower.display();

    while (player.gethp() > 0 ) { // when player is alive
        player.display();
		turnCounter();
        cout << "Option: " << endl;
        cout << "1. Normal Attack" << endl;
        cout << "2. Gamble Strike" << endl;
        cout << "3. Guard" << endl;
        cin >> options;
        playerturn(options);
		
        
		if (tower.getmobhp() > 0) { // if mob is still alive
            mobturn(options);
            cin.get();
        }
        
        if (tower.getmobhp() <= 0) { // if mob is dead
            if(tower.bossroom()){ // if finish boss
            	cout << "Congratulations!!! You've completed the game!" << endl;
            	player.bonusStat();
            	player.bonusStat();
            	player.bonusStat();
            	cin.get();
            	break;
            }
            else{ // if finish normal monster
	            nextFloor = true;
	            cin.ignore();
            	cout << "You've defeated the enemy! " << endl;
            	cout << "You've obtained some bonus stat" << endl;
            	player.bonusStat();
            	cin.get();
            	
            	cout << "You found a treasure chest!" << endl;
            	cin.get();
				weapon.randomWeapon();
            	cout << "Awesome! You've obtained a " << weapon.getName() << "! (Equip it for bonus " << weapon.getDamage() << " atk)" << endl; 
            	cout << "You've kept the weapon into your inventory" << endl;
            	inventory.addWeapon(weapon.getName(),weapon.getDamage());
            	cin.get();
            	
            	do{
				
	            	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	            	cout << "x          1. Inventory             x" << endl;
	            	cout << "x          2. Save Game             x" << endl;
	            	cout << "x          3. Continue              x" << endl;
	            	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	            	cout << "Enter here:";
	            	cin>> midchoice; cout<< endl;
	            	
	    			switch(midchoice){
		            	case 1:{
		            		inventory.printInfo();
		            		inventory.displayEquippedWeapon();
		            		cout << "Do you wanna switch weapon? (y/n)" << endl;
		            		cin >> decision;
		            		switch(decision){
		            			case 'Y':
		            			case 'y':{
		            				inventory.unequipWeapon();
		            				cout << "Enter the name of the weapon:";
		            				cin.ignore();
		            				getline(cin,weaName);
		            				inventory.equipWeapon(weaName);
		            				player.setatk(player.getatk()+weapon.getDamage());
									break;
								}
								case 'N':
								case 'n':{
									break;
								}
								default:
									cout << "Only y or n !    >:(" << endl;
							}
							break;
						}
						case 2:{
							//save game
							inventory.saveInv();
							player.playerStat();
							tower.savefloor();
							return;
							break;
						}
		            	
			            case 3:{
				            break;
						}
					}
					
	        	}while (midchoice != 3);
	        	
	        cout << "Proceeding to next floor..." << endl;
			tower.nextfloor();
			tower.display();
			cin.get();
        	}
        }
    }
    if (player.gethp() <= 0) {
    	cin.ignore();
        cout << "YOU DIED" << endl;
        cout << "Returning to main menu..." << endl;
        cin.get();
    }
}

Gameplay::Gameplay(string name): player(name){
	Weapon weapon;
	Inventory inventory;
	string weaName;
	
	int midchoice = 0;
	char decision = 0;
	int choice = 0;
	
    cout << "Entering tower...." << endl;
    cout << "Brace yourself!" << endl;
	tower.display();

    while (player.gethp() > 0 ) { // when player is alive
        player.display();
		turnCounter();
        cout << "Option: " << endl;
        cout << "1. Normal Attack" << endl;
        cout << "2. Gamble Strike" << endl;
        cout << "3. Guard" << endl;
        cin >> options;
        playerturn(options);
		
        
		if (tower.getmobhp() > 0) { // if mob is still alive
            mobturn(options);
        }
        
        if (tower.getmobhp() <= 0) { // if mob is dead
            if(tower.bossroom()){ // if finish boss
            	cout << "Congratulations!!! You've completed the game!" << endl;
            	cout << "Returning to main menu..." << endl;
            	player.bonusStat();
            	player.bonusStat();
            	player.bonusStat();
            	cin.get();
            	break;
            }
            else{ // if finish normal monster
	            nextFloor = true;
	            cin.ignore();
            	cout << "You've defeated the enemy! " << endl;
            	cout << "You've obtained some bonus stat" << endl;
            	player.bonusStat();
            	cin.get();
            	
            	cout << "You found a treasure chest!" << endl;
            	cin.get();
				weapon.randomWeapon();
            	cout << "Awesome! You've obtained a " << weapon.getName() << "! (Equip it for bonus " << weapon.getDamage() << " atk)" << endl; 
            	cout << "You've kept the weapon into your inventory" << endl;
            	inventory.addWeapon(weapon.getName(),weapon.getDamage());
            	cin.get();
            	
            	do{
				
	            	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	            	cout << "x          1. Inventory             x" << endl;
	            	cout << "x          2. Save Game             x" << endl;
	            	cout << "x          3. Continue              x" << endl;
	            	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	            	cout << "Enter here:";
	            	cin>> midchoice; cout<< endl;
	            	
	    			switch(midchoice){
		            	case 1:{
		            		inventory.printInfo();
		            		inventory.displayEquippedWeapon();
		            		cout << "Do you wanna switch weapon? (y/n)" << endl;
		            		cin >> decision;
		            		switch(decision){
		            			case 'y':{
		            				inventory.unequipWeapon();
		            				cout << "Enter the name of the weapon:";
		            				cin.ignore();
		            				getline(cin,weaName);
		            				inventory.equipWeapon(weaName);
		            				
		            				player.setatk(player.getatk()+weapon.getDamage());
									break;
								}
								case 'n':{
									break;
								}
							}
							break;
						}
						case 2:{
							//save game
							inventory.saveInv();
							player.playerStat();
							tower.savefloor();
							return;
							break;
						}
		            	
			            case 3:{
			            	cout << player.getName() << " uses Guard" << endl;
            				cout << "Next attack dealt by enemy will reduce by half" << endl;
				            break;
						}
					}
	        	}while (midchoice != 3);
	        	
	        cout << "Proceeding to next floor..." << endl;
			tower.nextfloor();
			tower.display();
			cin.get();
        	}
        }
    }
    if (player.gethp() <= 0) {
    	cin.ignore();
        cout << "YOU DIED" << endl;
//        cout << "Returning to main menu..." << endl;
        cin.get();
    }
}

void Gameplay::playerturn(int options) {
	int rng;
	srand(time(0));
	rng = rand()%11;
	
    switch (options) {
        case 1:
        	if(rng >=9){
        		cout << "You've hit the weakpoint of the enemy!" << endl;
        		cout << "Your attack is twice as effective!" << endl;
        		cout << player.getName() << "'s Normal Attack  dealt a CRITICAL STRIKE and deliver " << (player.getatk()*2)<< " damage to the enemy" << endl;
            	tower.setmobhp(tower.getmobhp() - (player.getatk()*2));
			}
        	else{
	            cout << player.getName() << " uses Normal Attack and dealt " << player.getatk() << " damage to enemy" << endl;
	            tower.setmobhp(tower.getmobhp() - player.getatk());
        	}
            break;
        case 2:
        	int gamble;
            srand(time(0));
    		srand(time(0));
		    gamble = rand() % 11;
		    rng = rand() % 11;
		
		    if (gamble <= 4) {
		        if (rng >= 9) {
		            cout << "Bullseye! You've successfully hit the target! Your damage has been amplified by 1.5x" << endl;
		            cout << "You've hit the weak point of the enemy!" << endl;
		            cout << "Your attack is twice as effective!" << endl;
		            cout << player.getName() << " dealt " << ((player.getatk() * 1.5) * 2) << " to the enemy!" << endl;
		            tower.setmobhp(tower.getmobhp() - ((player.getatk() * 1.5) * 2));
		        } else {
		            cout << "Bullseye! You've successfully hit the target! Your damage has been amplified by 1.5x" << endl;
		            cout << player.getName() << " dealt " << (player.getatk() * 1.5) << " to the enemy!" << endl;
		            tower.setmobhp(tower.getmobhp() - (player.getatk() * 1.5));
		        }
			} else {
		        cout << "Oof you've missed!" << endl;
		        cout << player.getName() << " dealt 0 to the enemy!" << endl;
		        tower.setmobhp(tower.getmobhp());
			}
        	break;
        case 3:
        	cout << player.getName() << " uses Guard" << endl;
        	cout << "Next attack dealt by enemy will reduce by half" << endl;
        	break;
        default:
    		cout << "If I have hands and a stick in my hands, I'd have bonked you with it" << endl;
    		cout << "rEaD tHe OpTiOn!!!" << endl;
	}
}


void Gameplay::mobturn(int options) {
	if (options ==3) {
        player.sethp(player.gethp() - (tower.getmobatk() / 2));  // Reduce player's HP by half
    } else {
        player.sethp(player.gethp() - tower.getmobatk());
    }
	cout << "-------- Monster's HP: " << tower.getmobhp() << " ATK: " << tower.getmobatk() << " --------" << endl; 
}

void Gameplay::turnCounter() {
    if (nextFloor==false){
	turn++;
    cout << "Turn: " << turn << endl;
	}
	else
		turn=0;
		nextFloor =false;
}



