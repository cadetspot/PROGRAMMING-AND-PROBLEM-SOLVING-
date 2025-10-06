/*
Name: Odhiambo Geofrey Odiwuor 
Reg No: PA106/G/28771/25
Description: A program that lets a user withdraw money from
the bank ATM when the balance is greater than zero
*/

#include <stdio.h> 

int main() {
    float balance, withdraw;
    // Initial account balance 
    printf("Enter your account balance ksh");
    scanf("%f", &balance);
    //continues withdrawal when the balance is greater than zero 
    while (balance > 0){
    printf("\nEnter amount you wish to withdraw Ksh");
    scanf("%f", &withdraw);
    //subtracts withdrawal from balance 
     balance-=withdraw;
    printf("\nyour balance is Ksh%.2f", balance);
    
       if (balance <= 0){
         printf("\nInsufient funds! Your account balance is Ksh%.2f", balance);
         printf("\nTransaction ended");
         break;
       }  
    }
return 0;
}
