#include <stdio.h>

// Function declarations
char asciiToChar(int asciiCode);
int sumOfNaturalNumbers(int n);
int findGreatest(int num1, int num2);

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

        // Switch case to perform the selected operation
        switch (choice) {
            case 1: {
                int asciiCode;
                printf("Enter ASCII code: ");
                scanf("%d", &asciiCode);
                printf("Corresponding character: %c\n", asciiToChar(asciiCode));
                break;
            }
            case 2: {
                int n;
                printf("Enter the value of n: ");
                scanf("%d", &n);
                printf("Sum of first %d natural numbers: %d\n", n, sumOfNaturalNumbers(n));
                break;
            }
            case 3: {
                int num1, num2;
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);
                printf("The greatest number is: %d\n", findGreatest(num1, num2));
                break;
            }
            case 4: {
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

// Function to convert ASCII code to character
char asciiToChar(int asciiCode) {
    return (char)asciiCode;
}

// Function to find the sum of n natural numbers
int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}

// Function to find the greatest among two entered numbers
int findGreatest(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

