/*
Name:Odhiambo Geofrey Odiwuor 
Reg NO: PA106/G/28771/25
Description: Program to calculate Compound Interest 
*/

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, n, amount;

    // Input values
    printf("Enter the principal amount:Ksh ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate: ");
    scanf("%lf", &rate);
    rate /= 100; // Convert rate to decimal
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%lf", &n);

    // Calculate compound interest
    amount = principal * pow((1 + rate/n), (n*time));

    // Display result
    printf("The future value of the investment is:Ksh %.2f\n", amount);

    return 0;
}