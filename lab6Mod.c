#include <stdio.h>
#include <stdlib.h>
float requestAmount(void);
void transferMoney(void);
void makeDeposit(float);
void makeWithdrawal(float);
int authenticatePin(int);

float balance=2000.00;
int main(){
    int tries=4;
start:
    printf("\nWelcome to emma banks\nEnter your 4 digit pin: ");
    int pin;
    scanf("%d",&pin);
    fflush(stdin);
    //printf("\nRealized %d",authenticatePin(pin)&&tries>1);
    if(authenticatePin(pin) && tries>1){
            menu:
    printf("1-Check Balance\n2-Make a withdrawal\n3-Make a Deposit\n4-Transfer Money\n>>>:");
    int choice;
    scanf("%d",&choice);
        switch(choice){
case 1:
    printf("\nYour currentBalance is GHS %.2f\n",balance);
    break;
case 2:
    makeWithdrawal(requestAmount());
    break;
case 3:
    makeDeposit(requestAmount());
    break;
case 4:
    transferMoney();
    break;
    }
    printf("Would you like to perfom another Transaction? 1.Yes 2. No\n");
    scanf("%d",&choice);
    fflush(stdin);
    if(choice==1){
        goto menu;
    }else{
    exit(0);
    }
    }else{
    tries--;
    if(tries==0){
        printf("\nYour account has been blocked please visit a customer service agent\n");
        exit(0);
    }
    goto start;
    }

return 0;}

//request amount function
float requestAmount(){
printf("Please enter amount: ");
float amount;
scanf("%f",&amount);
return amount;
}

void makeWithdrawal(float amount){
if(amount<balance){
    balance-=amount;
    printf("\nYou have withdrawn %.2f\nYour current balance is %.2f\n",amount,balance);
}else{
printf("You don't have sufficient balance to perform this transaction\nPlease top up with %.2f",amount-balance);
}

}
void makeDeposit(float amount){
balance+=amount;
printf("Your account has been credited with %.2f",amount);
}


void transferMoney(){
printf("Please enter the account no to transfer: ");
char accountNo[10];
scanf("%s",accountNo);
float amount=requestAmount();
if(amount>balance){
    printf("\nInsufficient balance to perfom this transaction\n");
}else{
balance-=amount;
printf("\nSuccesfully sent %.2f to %s",amount,accountNo);
}
}
int authenticatePin(int pin){
return pin==4556;
}
