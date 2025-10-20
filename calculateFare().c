/*
Name:Odhiambo Geofrey Odiwuor 
RegNo:PA106/G/28771/25
Description:A program that calculates total fare
*/
#include<stdio.h>
     //calculates fare to be paid 
    double fare(double distance){
    double total;
    //Ksh 50 per Kilometer
    total = distance*50;
    return total; 
    }

int main()
{
    double distance;
    //user enters distance travelled 
    printf("Enter distance in Kilometers:");
    scanf("%lf", &distance);
    printf("Total fare = Ksh %.2lf", fare(distance));
    return 0;
}