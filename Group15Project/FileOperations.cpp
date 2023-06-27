#include "FileOperations.h"
#include <unistd.h>
void  FileHandling::controlledReading(string readhead){
      for(char a : readhead){
        if(a=='*'){
            cout<<'\n';
            usleep(400000);
        }else{
        cout<<a;
        }
        usleep(20000);

    }
 }

 ///FUNCTION TO GET BUFFER FROM A FILE
 string FileHandling::getBuffer(int buffsize=200){
 string head;
    char putIn;
    ifstream infile(filePath);

fflush(stdin);
    while(infile){
            infile.get(putIn);

            head+=putIn;
    }

fflush(stdin);


//cout<<"Sending "<<head.c_str()<<endl;
return head;
 }

 ///CHECK FOR A PARTICULAR STRING
string storeInString(const char *ret){
    string toret;
    while(*ret!=','){
        toret+=*ret;
        ret++;
    }
    return toret;

}
//will receive buffer from the getbuffer function and separate the buffer based on delimiters to check for name of user
bool FileHandling::checkInfile(string checksum,string compareTo){

string tem="";
cout<<"Checksum received "<<checksum<<endl;

for(char a : checksum){

        //make sure we don't take the new line charactor
    if(a!='\n'){
        tem+=a;
        if(a=='-'){

          tem=tem.substr(0,tem.size()-1);
                if(tem==compareTo){
                    return true;
                }
            tem="";
        }
    }
}
return false;}
