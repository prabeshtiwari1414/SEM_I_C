#include <stdio.h>

int main() {
    int choice;

    do {
        // Displaying the menu
        printf("\nMENU\n");
        printf("1. Conversion of ASCII code to char\n");
        printf("2. To find the sum of n natural numbers\n");
        printf("3. To find the greatest among two entered numbers\n");
        printf("4. Exit\n");

        // User input
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Variables for various cases
        int asciiCode, n, num1, num2, result;

        // Switch case to perform the selected operation
        switch (choice) {
            case 1: {
                // Conversion of ASCII code to char
                printf("Enter ASCII code: ");
                scanf("%d", &asciiCode);
                printf("Corresponding character: %c\n", (char)asciiCode);
                break;
            }
            case 2: {
                // Sum of n natural numbers
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("Sum of first %d natural numbers: %d\n", n, (n * (n + 1)) / 2);
                break;
            }
            case 3: {
                // Finding the greatest among two entered numbers
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                result = (num1 > num2) ? num1 : num2;
                printf("The greatest number is: %d\n", result);
                break;
            }
            case 4: {
                // Exiting the program
                printf("Exiting the program. Goodbye!\n");
                break;
            }
            default: {
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
            }
        }
    } while (choice != 4);

    return 0;
}

