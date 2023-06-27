#include "Character.h"
#include "Player.h"
#include <iomanip>


void MainPlayer::showDetails(){
Character playerCharacter;
playerCharacter.showCharacterStats(level);
}
void MainPlayer::showStats(){
string rnk=level==Rouge?"Rouge":"Assasain";
cout.width(30);
cout<<"<NAME> \t\t <"<<name <<">\n\n";
cout.width(30);
cout<<"<Rank> \t\t <"<<rnk << ">\n\n\n\n\n\n\n";
cout.width(20);
cout<<"<Abilities >  ";
showDetails();
cout<<"\n\n\n\n"<<endl;
}
void MainPlayer::setPlayerLevel(int lev){
    if(level>0){
        level=static_cast <Character_Type> (lev);
    }


}

