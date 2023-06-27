#ifndef FILEOPERATIONS_H_INCLUDED
#define FILEOPERATIONS_H_INCLUDED
#include <string.h>
#include <iostream>
#include <fstream>
#include "Player.h"
#include <sstream>
using namespace std;

class FileHandling{
private:
    char filePath[30];
public:
    FileHandling(char * path){
        strcpy(filePath,path);
    }
   string  getBuffer(int buffsize);
    void controlledReading(string);

    ///function for general reading operations
void readFile(){
string rtnBuffer=getBuffer(200);
controlledReading(rtnBuffer);
    }


bool checkInfile(string checksum, string compareTo);
void showFilePath(){
cout<<filePath<<endl;
}


void newGameSave(MainPlayer player){
    ofstream outfile(filePath,ios::app);
    if(checkInfile(getBuffer(20),player.getName())){
        cout<<"Player  with id  "<<player.getName()<<"found !!! please enter a new id "<<endl;
        return;
    }
        outfile<<player.getName()<<"-"<<player.getLevel()<<endl;
    }

void saveGameProgess(MainPlayer player){
    ostringstream text;
    ifstream in_file(filePath);
    text<<in_file.rdbuf();
        string str = text.str();
        string str_search = player.getName();
        string str_replace =  player.getName()+"-"+to_string(player.getLevel());
        size_t pos = str.find(str_search);
        str.replace(pos, string(str_search).length(), str_replace);

        ofstream out_file(filePath);
        out_file << str;
}
};


#endif // FILEOPERATIONS_H_INCLUDED
