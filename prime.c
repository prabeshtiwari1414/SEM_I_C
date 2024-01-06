#include <stdio.h>

int main() {
    int i, number, isPrime = 1; // Assume the number is prime by default

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0; // Not prime
    } else {
        for ( i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
    }

    // Check if the number is prime and print the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

