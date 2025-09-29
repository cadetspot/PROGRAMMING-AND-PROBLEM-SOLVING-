/*
Name: Odhiambo Geofrey Odiwuor 
Reg No: PA106/G/28771/25
Descriptio: A program that determines if a student is
eligible for the final exam 
*/
#include <stdio.h>

int main() {
//variable declaration 
    int marks;
    int attendance;
    
    printf("Exam eligibility.\n");
    
    printf("Enter average marks(Out of 100):\n");
    // Promt the student to enter the average marks
    scanf("%d", &marks); 
    printf("Enter attendance(Out of 100):\n");
    //Promt the student to enter his/her attendance 
     scanf("%d", &attendance);
    // use nested if
    if (attendance >= 75) {
       if (marks >= 40){
       printf("CONGRATULATIONS!\n");  
       printf("You are eligible for final exam\n");    
       } else {
       printf("\tSORRY!\n");
       printf("You are not eligble for the final exam\n");
       }
       } else {
       printf("\tSORRY!\n");
       printf("You are not eligble for the final exam\n");
       }
       
    return 0;
}