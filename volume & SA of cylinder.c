/*Name: Odhiambo Geofrey Odiwuor 
Reg No: PA106/G/28771/25
Description: A program that calculates the Volume 
             and Surface area of a cylinder
 */            
# include <stdio.h>

int main() {
    printf("\nVolume and Surface area of a Cylinder");
    //variable declaration    
    float radius;
    float height;
    
    //Promt user to enter radius and height
    printf("\nEnter Radius:");
    scanf("%f", &radius);
    printf("\nEnter Height:");
    scanf("%f", &height);
    //calculates the square of radius
    float exponent = 2.0;    
    float square_radius= pow(radius, exponent);
    // Pi is initialised as constant 
    double const pi = 3.142;
    // Calculates the Volume of a cylinder 
    double volume = pi * square_radius * height;
    printf("\nVolume:%.2lf", &volume);
    //Calculates the Surface area of a cylinder 
    double SA = 2*pi*square_radius+2*pi*radius*height;
    printf("\nSurface area:%.2lf", SA);
    return 0;
}