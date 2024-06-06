// *###Exercise 3*

#include <stdio.h> // Include standard input-output header file
#include <string.h> // Include string handling functions

//Name: Agijesuefe Goodnews Jesuruona
//Department: Software Engineering
//Mat no.: CMP2307634
//D-code:  D1010134
int main() {
    char array[5][100]; // Declare a 2D array to hold 5 strings, each up to 99 characters + null terminator
    int i; // Loop control variable

    // Prompt the user to enter 5 strings
    printf("Enter 5 strings:\n");

    // Loop to take input from the user and store it in the array
    for (i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(array[i], 100, stdin); // Read the string input and store it in array[i]
        array[i][strcspn(array[i], "\n")] = '\0'; // Remove trailing newline character if present
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", array[i]); // Print each element of the array
    }

    return 0; // Return 0 to indicate successful program execution
}
