#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
struct user createUser(int);
struct user{
char name[50];
char password[10];
double balance;
int id;
};
typedef struct user user;
void updateChanges(user us[],int);
int main(){
    //decleare pseudo random time funciton
    FILE *fp;
    fp=fopen("bankdata.bin","rb");
    srand(time(NULL));
    user userArray[10];
  // userArray=malloc(sizeof(user *)*20);
   //int numOfUsers=fread((void *) userArray,sizeof(user *),20,fp);
       fclose(fp);
int numOfUsers=0;
  /* for(int i=0;i<5;i++){
    userArray[i]=createUser();
   }
   for(int i=0;i<5;i++){
    printf("Password for %s is -->%s",userArray[i]->name,userArray[i]->password);
   }*/

//user Actions
printf("\n\n************WELCOME TO RANDOM SAVINGS AND LOANS******************************** \n\n");
char quit='M';
while(quit!='Y'|| quit!= 'y'){
    printf("1.Create An Account \n2.Make a Deposite\n3.Make a withdrawal\n3.Change Your password\n");
    int userChoice;
    scanf("%d",&userChoice);
        fflush(stdin);
    if(userChoice==1){
        userArray[numOfUsers]=createUser(numOfUsers);

        updateChanges(userArray,numOfUsers);
        numOfUsers++;

    }
    printf("the are %d now",numOfUsers);


    printf("\n\t\t\t Do you want to close Y or N");
    scanf(" %c",&quit);
}

}
void genPassWord(char *container){
char passWord[10];
for(int i=0;i<5;i++){
    passWord[i]=65+rand()%9;
}
for(int i=5;i<10;i++){
    passWord[i]=49+rand()%9;
}
strcpy(container,passWord);

}
user  createUser(int num){
    user us;
    //us=malloc(sizeof(user));
printf("Please enter your name: ");
scanf("%[^\n]",us.name);
fflush(stdin);
genPassWord(us.password);
us.id=num;
printf("Hello %s your password is:   %s keep it safe\n",us.name,us.password);

return us;
}
void updateChanges(user currArray[],int numOfUsers){
    FILE *fp;

   // user userArray[numOfUsers];
     //user testArr[numOfUsers];
    if(numOfUsers==0){
         fp=fopen("bankdata.bin","wb");
         fwrite( &currArray,sizeof(struct user),1,fp);
         fclose(fp);
    }else{
    fp=fopen("bankdata.bin","rb");
    //printf("*** %d number of users now ****\n",numOfUsers);
    user cpyArray[numOfUsers+1];
   fread(&cpyArray,sizeof(struct user),1,fp);
   //cpyArray[numOfUsers]=currArray[numOfUsers];

    //printf("\nCompare copy %s and ori %s\n",cpyArray[numOfUsers].name,currArray[numOfUsers].name);
            for(int i=0;i<numOfUsers;i++){
            printf("\n %s pasword is %s ",cpyArray[i].name,cpyArray[i].password);
        }
          fclose(fp);
    fp=fopen("bankdata.bin","ab");
  fwrite(&currArray,sizeof(struct user),1,fp);
    fclose(fp);
    }
}

