#include <stdio.h>

int main() {
    int number = 3;  // Example input
    int acum = 1;  // Initialize the accumulator to 1

    // Factorial calculation directly in main
    if (number == 0) {
        acum = 1;  // Base case: 0! = 1
    } else {
        for (int i = 1; i <= number; i++) {
            acum = acum * i;  // Multiply acum by each number from 1 to 'number'
        }
    }

    // Print the result
    printf("The factorial of %d is %d\n", number, acum);

    return 0;
}