/*
Name: Odhiambo Geofrey Odiwuor 
Reg No: PA106/G/28771/25
Descriptio: Program that allows a customer to
borrow money if certain conditions are met.
*/
#include <stdio.h>

int main() {
//variable declaration 
    int age;
    int income;
    
    printf("Enter your age: ");
    //Promt the user to enter his age
    scanf("%d", &age);
    printf("\nEnter your annual income: Ksh ");
    //Promt the user to enter his annual income   
    scanf("%d", &income);
    // These are the conditions that should be met    
    if (age >= 21 ) {
        if (income >= 21000) {
          printf("\nCongratulations you qualify for a loan");
    } else {
        printf("\nunfortunately we are unable to offer you a \nloan at this time.");
        }
        } else {
        printf("\nunfortunately we are unable to offer you a \nloan at this time.");
    }
    return 0;
}