//Name:Odhiambo Geofrey Odiwuor 
//Reg No:PA106/G/28771/25
//Description:User details
#include <stdio.h>
//
int main() {

    int height;
    int IDNumber;
    float balance;
// user is required to enter his or her height ID Number and bank balance 
    printf("Enter your height, Id number and bank balance");
    scanf("%d %d %f", &height,  &IDNumber, &balance);
    printf("Your Height: %d\nID_Number: %d\nYour balance: %.2fKSH",height, IDNumber, balance);
    return 0;
}