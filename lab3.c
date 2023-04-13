#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Please enter your height: ");
    char height[10];
    scanf("%s",height);
    printf("\nPlease enter you weight: ");
    char weight[10];
    fflush(stdin);
    scanf("%s",weight);
    printf("Your height is : ");
    puts(height);
    printf("Your weight is: ");
    puts(weight);
    float newHeight=atof(height);
    float newWeight=atof(weight);
    printf("\nInteger height: %d\n",atoi(height));
    float bdMindex=(newHeight)/(newWeight*newWeight);
    printf("Your body mass index: %f",bdMindex);

return 0;}
