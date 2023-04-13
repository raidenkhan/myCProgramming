#include <stdio.h>


int main(){
int two[2][2]={

{2,4},
{3,5}
};

int sec[2][2]={
{1,3}
,
{5,6}
};

//multiply the arrays
int res[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<1;j++){
        res[i][j]=two[i][j]*sec[j][i]+two[i][j+1]*sec[j+1][i];
    }
}
for(int i=0;i<2;i++){

    printf("\t%d \t%d",res[i][0],res[i][1]);
    printf("\n");
}

return 0;}
