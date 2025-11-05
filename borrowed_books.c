/*
Name: Odhiambo Geofrey Odiwuor 
REG NO:PA106/G/28771/25
Description: A program that stores borrowed books from a library 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_LENGTH 256

int main() {
    FILE *file_pointer;
    char book_title[MAX_TITLE_LENGTH];

    // Open the file in "append" mode. 
    file_pointer = fopen("borrowed_books.txt", "a");

    // Check if the file was opened successfully.
    if (file_pointer == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the title of the borrowed book: ");

    // Read the book title from user input.
    // fgets is used to safely read an entire line, including spaces.
    if (fgets(book_title, MAX_TITLE_LENGTH, stdin) != NULL) {
        // Remove the newline character that fgets() reads.
        book_title[strcspn(book_title, "\n")] = 0;

        // Write the book title to the file.
        fprintf(file_pointer, "%s\n", book_title);

        // Display a confirmation message.
        printf("Success: The title '%s' has been successfully stored in borrowed_books.txt.\n", book_title);
    } else {
        printf("Error reading input.\n");
    }

    // Close the file.
    fclose(file_pointer);

    return 0; // Exit successfully
}
