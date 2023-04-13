#include <stdio.h>
#include <unistd.h>
int MAX= 10;
int userScores[10]={0};
void newGame(void);
void loadGame(void);
void createNewUser(void);
void smoothDisp(char *data,int timing);
void readData(char *filename);

//BEGIN MAIN FUNCTION

int main(){
    printf("**WELCOME***\n");
    char cont;
    do{
    printf("Please choose an option \n [1].New Game \n\n [2].Load Saved Game Saved Game\n\n\t\t-->:");
    char choice;
    scanf(" %c",&choice);
    fflush(stdin);
    switch(choice){

    case '1':
        newGame();
        break;
    case '2':
        loadGame();
        break;

    }
    printf("\nDo you wish to continue playing\n [Y].Yes\t\t[N].No\n\n\t\tAny key would continue playing\n");

    cont =toupper(getchar());

    printf("\n%c cont is\n",cont);
    }while(cont!='Y');


    return 0;}

//END MAIN FUNCTION

void newGame(){

    smoothDisp("Welcome To the Game of Choices\n\t> Press 1 to create a new user id\n\t> Press 2 to see the highest score\n\n\t\t>>>: ",8000);
    char userChoice;
    scanf(" %c",&userChoice);
    fflush(stdin);
    switch(userChoice){
    case '1':
        createNewUser();
        break;
    case '2':
        readData("userNames.txt");
        break;
    default:
        printf("\nPlease enter a valid option\n");
}

}
void loadGame(){


}


void createNewUser(){
    FILE *fp;
    fp=fopen("userNames.txt","a");
    printf("Please enter the username\n");
    char userName[20];
    gets(userName);
    fwrite(&userName,sizeof(userName),1,fp);
    fputc('\n',fp);
    fflush(stdin);
    fclose(fp);
}
void readData(char *filename){
    FILE *fp;
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("\nCouldn't Read game data\n");
        exit(1);
    }else{
    char currUser[20];
    while(fread(&currUser,20,1,fp)){
        printf("\n%s\n",currUser);
    }
    }
    fclose(fp);

}






//UTITLITY FUNCTIONS
void smoothDisp(char *data,int timing){
    int i=0;
    while(data[i]!='\0'){
        putchar(data[i]);
        fflush(stdin);
        usleep(timing);
        i++;

    }
    sleep(1);

}

