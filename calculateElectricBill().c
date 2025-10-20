/*
Name:Odhiambo Geofrey Odiwuor 
RegNo:PA106/G/28771/25
Description:A program that calculates electric bill 
*/
#include <stdio.h>

float electricbill(int units){
float bill;
//calculates and return the bill 
    if (units <= 100)
    bill = units*10;
    else if(units <= 200)
    bill=(100*10)+((units-100)*15);
    else
    bill=(100*10)+(100*15)+((units-200)*20);
    return bill;
    
    }
 
int main(){
  int units;
  //initial units consumed 
  printf("Enter units consumed:");
  scanf("%d", &units);
  printf("Total bill = Ksh %.2f",electricbill(units));
  return 0;
}   
    

    