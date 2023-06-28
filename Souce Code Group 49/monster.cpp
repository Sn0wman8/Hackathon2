#include "monster.h"
#include <iostream>

using namespace std;

Monster::Monster(int h =100, int a=100){
  maxhp = h;
  maxatk = a;
  hp = maxhp;
  atk = maxatk;
}



//void Monster:: sethp(int h){
//  hp = h;
//}
//
//void Monster:: setatk(int a){
//  atk =a;
//}

void Monster::display()const{
  cout << "-----  HP: " << hp <<" -----" << endl;
  cout << "----- ATK: " << atk << " -----" << endl;
}
