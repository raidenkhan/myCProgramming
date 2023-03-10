#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Functions

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

//Main Code
int main()
{
    //Local Declarations
    int option;
    float balance = 10000.00;
    int choose;
    int newPin;

    bool pin = true;

    printf("Enter your secret number:\n");
    scanf("%d" , &pin);


    //insert code here

    while(pin == pin)
    {
        mainMenu();
        printf("=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=\n");
        printf("Your Selection:\t");
        scanf("%d", &option);

        switch(option){
    case 1:
        system("CLS");
        checkBalance(balance);
        break;

    case 2:
        system("CLS");
        balance = moneyDeposit(balance);
        break;

    case 3:
        system("CLS");
        balance = moneyWithdraw(balance);
        break;

    case 4:
        system("CLS");
        printf("Enter new pin:\n");
        scanf("%d" , &newPin);
        pin = newPin;
        break;


    case 5:
        system("CLS");
        menuExit();
        return 0;

    default:
        errorMessage();
        break;
        }
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Would you like to do another transaction:\n");
    printf("<1> Yes\n");
    printf("<2> No\n");
    scanf("%d", &choose);

    system("CLS");

    if (choose == 2)
    {
        pin = false;
        menuExit();
    }
    return 0;
}//main code

//Functions

void mainMenu()
{
    printf("********HELLO!*********\n");
    printf("********WELCOME TO ATM BANKING*********\n");
    printf("****Please Choose One of the Options\n");
    printf("<1> Check Balance\n");
    printf("<2> Deposit\n");
    printf("<3> Withdraw\n");
    printf("<4> Change Pin\n");
    printf("<5> Exit\n");
}//Main Menu

void checkBalance(float balance)
{
    printf("You choose to See your Balance\n");
    printf("\n\n*****Your Available Balance is:GHS%.2f\n\n", balance);

}//Check Balance

float moneyDeposit(float balance)
{
    float deposit;
    printf("You choose to Deposit Money\n");
    printf("Your Balance is: GHS%.2f\n\n", balance);
    printf("Enter your amount to Deposit\n");
    scanf("%f",&deposit);

    balance += deposit;
    printf("Your New Balance is: GHS%.2f\n\n", balance);
    return balance;

}//Money Deposit

float moneyWithdraw(float balance)
{
    float withdraw;
    bool back = true;
    printf("You choose to Withdraw Money\n");
    printf("Your Balance is: GHS%.2f\n\n", balance);

    while(back)
    {
         printf("Enter your amount to Withdraw\n");
         scanf("%f",&withdraw);

         if (withdraw < balance)
         {
             back = false;
             balance -= withdraw;
             printf("\nYour withdrawing money is; GHS%.2f\n", withdraw);
             printf("Your Balance is: GHS%.2f\n\n", balance);

         }
         else{
            printf("INSUFFICIENT BALANCE\n");
            printf("Please contact your Bank Customer Services\n");
            printf("Your Balance is: GHS%.2f\n\n", balance);

         }
    }return balance;

}//money withdraw

void menuExit()
{
    printf("---------TAKE YOUR RECEIPT!!!---------\n");
    printf("---------Thank you for using ATM Banking Machine!!!---------\n");

}//exit menu

void errorMessage()
{
    ;
    printf("!!!You selected invalid number!!!\n");
}//error messages
