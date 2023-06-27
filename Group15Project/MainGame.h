#ifndef MAINGAME_H_INCLUDED
#define MAINGAME_H_INCLUDED
#include "Player.h"
#include <iostream>
#include "FileOperations.h"
#include <iomanip>



class MainGame{
private:
    char name[30];
public:

    MainGame(string key){
    welcome();
    }

void welcome(void);

///CODE TO SIGN IN
void signIn(void);
};


#endif // MAINGAME_H_INCLUDED
