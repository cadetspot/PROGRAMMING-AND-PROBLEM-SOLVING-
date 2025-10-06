/*
Name: Odhiambo Geofrey Odiwuor 
Reg No: PA106/G/28771/25
Description: A program that lets a user enter 
the correct password 
*/

#include <stdio.h> 
#include <string.h>

int main() {
    char password[20];
    char correctpassword[] = "1234";
    /* do-while ensures the user is asked for the
    password at least once
    */
    do{
    printf("Enter password\n");
    scanf("%s", &password);
    if(strcmp(password, correctpassword) !=0)
    printf("Incorrect password. Try again \n");
    
    //compares the password entered and the correct password 
    } while (strcmp(password, correctpassword) !=0);
    printf("Accent granted\n");

return 0;
}