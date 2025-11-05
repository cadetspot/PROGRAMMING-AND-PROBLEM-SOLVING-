/*
Name: Odhiambo Geofrey Odiwuor 
REG NO:PA106/G/28771/25
Description: A program that calculates total sales in a day
*/
#include <stdio.h>

int main() {
    
    FILE *file_ptr;

    // Declare variables to store the transaction amount and the total sales
    float transaction_amount;
    float total_sales = 0.0;

    // Open the file "sales.txt" in read mode ("r")
    // Check if the file was opened successfully
    file_ptr = fopen("sales.txt", "r");
    if (file_ptr == NULL) {
        printf("Error: Could not open the file 'sales.txt'.\n");
        return 1; // Return an error code
    }

    while (fscanf(file_ptr, "%f", &transaction_amount) == 1) {
        // Add the current transaction amount to the total sales
        total_sales += transaction_amount;
    }

    fclose(file_ptr);

    // Display the calculated total sales for the day
    printf("Total sales for the day: %.2f\n", total_sales);

    return 0;
}
