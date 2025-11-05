/*
Name: Odhiambo Geofrey Odiwuor 
REG NO:PA106/G/28771/25
Description:A program that stores student's Examination Results 
*/
#include <stdio.h>
#include <stdlib.h>

// Defines a structure to hold the student information.
// The structure groups a student's name, registration number, and marks.
typedef struct {
    char name[50];
    int reg_number;
    float total_marks;
} Student;

int main() {
    FILE *fp;
    Student student;

    // Attempt to open the binary file named "results.dat" for reading in binary mode ("rb").
    fp = fopen("results.dat", "rb");

    // Check if the file was successfully opened.
    if (fp == NULL) {
        printf("Error: Could not open file results.dat\n");
        return 1; // Exit the program with an error code.
    }

    printf("--- Student Examination Results ---\n");

    // ii. Reads all student records from the binary file.
    while (fread(&student, sizeof(Student), 1, fp) == 1) {
        // Displays the name and marks of each student on the screen.
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n", student.total_marks);
        printf("-----------------------------------\n");
    }

    // Close the file after reading is complete.
    fclose(fp);

    return 0;
}

