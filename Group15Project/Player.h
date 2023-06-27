#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <string.h>

#include <iostream>
using namespace std;

class MainPlayer{
private:
    string name;
    int playerHealth;
    int savedState;

public:
enum Character_Type {NPC,Rouge,Demon,Assasain,Mage,Celestial};//has to come before player.h
    Character_Type level;
    MainPlayer()=default;
    MainPlayer(Character_Type);

    MainPlayer(string nme){
    name=nme;
    playerHealth=100;
    savedState=0;
    level=Rouge;

    }

    void showDetails();
    void showStats();

    ///SETTERS FOR PLAYER CLASS
    void setName(string nm){
        name=nm;
    }
    string getName(){
    return name;
    }

    void setPlayerLevel(int lev);


    ///GETTERS FOR PLAYER CLASS
    Character_Type getLevel(){
    return level;
    }
};


#endif // PLAYER_H_INCLUDED
