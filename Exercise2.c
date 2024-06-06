// *###Exercise 2*

#include <stdio.h> // Include standard input-output header file

//Name: Agijesuefe Goodnews Jesuruona
//Department: Software Engineering
//Mat no.: CMP2307634
//D-code:  D1010134
int main() {
    // Variable declaration for loop control
    int i;

    // Printing numbers from 1 to 10 using a for loop
    printf("Using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i); // Print the current value of i
    }

    // Printing a separator line
    printf("\n");

    // Printing numbers from 1 to 10 using a while loop
    printf("Using while loop:\n");
    i = 1; // Initialize i to 1 for while loop
    while (i <= 10) {
        printf("%d\n", i); // Print the current value of i
        i++; // Increment i by 1
    }

    // Printing a separator line
    printf("\n");

    // Printing numbers from 1 to 10 using a do-while loop
    printf("Using do-while loop:\n");
    i = 1; // Initialize i to 1 for do-while loop
    do {
        printf("%d\n", i); // Print the current value of i
        i++; // Increment i by 1
    } while (i <= 10); // Continue the loop as long as i is less than or equal to 10

    return 0; // Return 0 to indicate successful program execution
}
