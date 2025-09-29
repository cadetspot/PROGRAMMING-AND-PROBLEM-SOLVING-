/*
Name: Odhiambo Geofrey Odiwuor 
Reg No: PA106/G/28771/25
Descriptio: A program that calculates users water bill
*/
#include <stdio.h>

int main() {
//variable declaration 
    double units_consumed;
    double total_bill;  
      
    printf("Enter the water units consumed:");
    // Promt the user to enter units of water consumed 
    scanf("%lf", &units_consumed);
    
    if (units_consumed <= 30) {
    total_bill = units_consumed*20;
    printf("Total bill is KSH %.2lf\n", &total_bill );
    }
    else if (units_consumed >= 31 && units_consumed <= 60) {
    total_bill = units_consumed*25 ;
    printf("Total bill is KSH %.2lf\n", &total_bill );
    }
    else {
    total_bill = units_consumed*30;
    printf("Total bill is KSH %.2lf\n", &total_bill );
    }   
 
    return 0;
}