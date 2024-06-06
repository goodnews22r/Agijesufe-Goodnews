// *###Exercise 1*

#include <stdio.h> // Include standard input-output header file

// Include standard input-output header file
//Name: Agijesuefe Goodnews Jesuruona
//Department: Software Engineering
//Mat no.: CMP2307634
//D-code:  D1010134
int main() {
    int number; // Variable to store the user input number

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number); // Read the integer input from the user

    // Check if the number is even or odd using the modulus operator
    if (number % 2 == 0) {
        // If the remainder is 0, the number is even
        printf("The number %d is even.\n", number);
    } else {
        // If the remainder is not 0, the number is odd
        printf("The number %d is odd.\n", number);
    }

    return 0; // Return 0 to indicate successful program execution
}

