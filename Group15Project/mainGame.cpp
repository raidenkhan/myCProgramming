#include "MainGame.h"
#include <unistd.h>
void smoothEffect(char *text,int);
void ContiueGameHandler(void);
void NewGameHandler(void);
MainPlayer genericPlayer("RandomName");
FileHandling signInHandler("Players.txt");

///NEW GAME OPERATIONS

void MainGame::signIn(){
    ///CALL FOR SIGN IN OPTIONS
        smoothEffect("Please Enter An Option\n\n",20);
        smoothEffect("[1] New Game\t",5);
        smoothEffect("[2] Continue\t\n\n",5);
        smoothEffect(">\t",5);
        char choice;
        cin>>choice;
        switch(choice){
    case '1':
        NewGameHandler();
        break;
    case '2':
        ContiueGameHandler();
        break;
        }
}

///DEFINE WELCOME IN MAINGAME
void MainGame::welcome(){
    smoothEffect("WELCOME To ZORK -> CITY OF MYSTRY\n\n\n",20);
    signIn();
}

void ContiueGameHandler(){
        cout<<"Please enter your user name  > ";
        string username;
        cin>>username;
        cout<<endl;
      if(signInHandler.checkInfile(signInHandler.getBuffer(20),username)){
                cout<<"Your identity has  been identified successfully"<<endl;
                //Grab the username
                genericPlayer.setName(username);
                //Test for playerlevelChanges
                cout<<"Please enter player leve "<<endl;
                int lev;
                cin>>lev;
                genericPlayer.setPlayerLevel(lev);
               // genericPlayer.showDetails();
                genericPlayer.showStats();



        }else{
        cout<<"No user with this id !!!!!"<<endl;
        }
}
void NewGameHandler(){
smoothEffect("Please Enter your name : ",20);
string username;
cin>>username;
genericPlayer.setName(username);
smoothEffect("\nWelcome\n THIS IS YOUR NEW ID  \n\n\n ",30);
genericPlayer.showStats();
signInHandler.newGameSave(genericPlayer);

}





void smoothEffect(char *text,int width=40){
        cout.width(width);
while (*text!='\0'){
        cout<<*text;
        usleep(2000);
        text++;

}

}


