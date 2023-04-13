#include <stdio.h>
void printArray(int array[],int size){
for(int i=0;i<size;i++){
    printf("%d\t",array[i]);
}
}
void swap(int *x,int*y){

int *tmp=*x;
*x=*y;
*y=tmp;
}
//insertion sort

void insertionSort(int arr[],int n){
    int i,j,key;
for(int i=1;i<n;i++){

    j=i-1;
    key=arr[i];
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}

}

//bubble sort
void bubblesort(int arr[]){
int sizeOfArr=5;
printf("InputArray: ");
printArray(arr,5);

for(int i=0;i<sizeOfArr;i++){

    int curr=arr[i];
    //printf("curr is %d\n",curr);
    for(int j=0;j<sizeOfArr;j++){
            printf("\n");

        if(curr<arr[j]){
            swap(&arr[i],&arr[j]);


        }
    }
            printArray(arr,5);

}

}
void bestChange(int amount){
int notes[]={1,2,5,10,20,50,100,200};
int sizeArr=sizeof(notes)/sizeof(int)-1;

//printf("\nArrary size is %d\n",sizeArr);
for(int i=sizeArr;i>=0;i--){
    if(notes[i]<=amount){
        printf(" \n%d %d cedis  notes\n",amount/notes[i],notes[i]);
        amount%=notes[i];
    }
}

}


int main(){
    int arr[]={3,2,4,1,5};
bubblesort(arr);
return 0;}
