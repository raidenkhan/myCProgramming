#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED
using namespace std;
#include <iostream>
#include <vector>
#include "Player.h"

class Character : public MainPlayer {
private:
    vector <string> characterAbilities;
public:
    //Character(Character_Type level):MainPlayer(level){};
    void showCharacterStats(Character_Type level);



};



#endif // CHARACTER_H_INCLUDED
