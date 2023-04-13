#include <stdio.h>
#include <stdlib.h>
char grades[20];
char username[20];
void getGrades(int);
int main(){

getGrades(studentId());
printf("Student %s had %s",username,grades);
calculateGrade(grades);


return 0;}

int studentId(){
printf("Please enter student id: ");
int id;
scanf("%d",&id);
return id;
}
void getGrades(int id){
FILE *fp;
fp=fopen("grades.txt","r");

if(fp==NULL){
    printf("Error reading the file!!\n");
}
    for(int i=0;i<id;i++){

    fscanf(fp,"%[^,],%s",username,grades);
    }
    if(id>1){
        username[0]=" ";
    }
    fclose(fp);

}
int calculateGrade(){
    char *grade=grades;
    int total=0;
while(*grade!='\0'){
    if(*grade!=','){
        printf("\n%d\n",*grade-48);
        total+=*grade-48;
    }
    grade++;


}
printf("\nGot this at total %d",total);
return 0;
}
