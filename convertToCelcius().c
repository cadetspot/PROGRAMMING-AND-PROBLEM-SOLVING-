/*
Name:Odhiambo Geofrey Odiwuor 
RegNo:PA106/G/28771/25
Description:A program that Convert temperature from
            Fahrenheit to celcius 
*/
#include<stdio.h>
     
    float Convertcelcius(float Fahrenheit){
    float celcius;
    //Convert Fahrenheit to celcius 
    return (Fahrenheit-32)*(5.0 / 9.0);
    }

int main(){
    float Fahrenheit;
    //user input temperature in Celcius 
    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &Fahrenheit);
    printf("Temperature in Celcius = %.2f°C", Convertcelcius(Fahrenheit));
    return 0;
}