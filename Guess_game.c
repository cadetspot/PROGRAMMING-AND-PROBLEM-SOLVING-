/*
Name: Odhiambo Geofrey Odiwuor 
Reg No:PA106/G/28771/25
Description: A number guessing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  
    int secretNumber, guess, attempt = 0;
    // Initialise random number generator
    srand(time(0));
    //Generate a random number between 1 and 20
    secretNumber = rand () % 20 + 1;
    printf("Welcome to number guessing game.\n");
    printf("The secret number is between 1 to 20\n");
   //loops until the player guesses correctly 
    do{
       printf("\nEnter your guess\a");
       scanf("%d", &guess);
       attempt++;
       if (guess > secretNumber){
       printf("\nToo high");
       }
       else if(guess < secretNumber){
       printf("\nToo low");
       }
       else{
       printf("\nCongratulations! You guessed the number in %d attemps", attempt);
       }
    
       }while(guess != secretNumber);


return 0;
}