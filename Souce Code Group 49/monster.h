#ifndef monster_h
#define monster_h
#include<iostream>

using namespace std;

class Monster{
  private:
  int maxhp, maxatk;
  public:
    int hp;
    int atk;
    Monster(int,int);
//    ~Monster();
//    void sethp(int);
//    void setatk(int);
    void display() const;

};
#endif
