#include "Character.h"
using namespace std;
#include <iostream>
//#include "Player.h"
/*Character::Character(Character_Type chartype){
    switch(chartype){
case NPC:
    characterAbilities={""};
    break;
case Rouge:
    characterAbilities={"Dash","Blood Swipe","Ressurrect"};
    break;
case Demon:
    characterAbilities={"Absorb","Demon Art","Heal","Infinite"};
    break;
case Assasain:
    characterAbilities={"Sword","Shield","Life Energy Attack","Dash"};
    break;
case Mage:
    characterAbilities={"Spell","Invisibility","Heal"};
    break;
case Celestial:
    characterAbilities={"Reincarnate","Soul Weapon","Celestial Energy"};
    break;
    }

}
*/
void Character::showCharacterStats(Character_Type chr){
        switch(chr){
case NPC:
    characterAbilities={""};
    break;
case Rouge:
    characterAbilities={"Dash","Blood Swipe","Ressurrect"};
    break;
case Demon:
    characterAbilities={"Absorb","Demon Art","Heal","Infinite"};
    break;
case Assasain:
    characterAbilities={"Sword","Shield","Life Energy Attack","Dash"};
    break;
case Mage:
    characterAbilities={"Spell","Invisibility","Heal"};
    break;
case Celestial:
    characterAbilities={"Reincarnate","Soul Weapon","Celestial Energy"};
    break;
    }
    cout<<"-->   ";
    for(auto a : characterAbilities){
        cout<<"<"<<a<<">"  <<"   ||     ";
    }

    cout<<"   <---"<<endl;


}
