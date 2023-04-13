#include <stdio.h>
int main(){
FILE *pt;
pt=fopen("secondText.txt","w");
fprintf(pt,"%s %d","Emmanuel",99);
fclose(pt);
pt=fopen("secondText.txt","r");
int num;
char name[10];
fscanf(pt,"%s %d",name,&num);
printf("The recovered is name : %s and num: %d",name,num);



return 0;}
