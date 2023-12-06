#include <stdio.h>

int main() {
    int num1, num2, num3;

    // User input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Finding and displaying the middle number
    int middle;

    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3))
        middle = num1;
    else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3))
        middle = num2;
    else
        middle = num3;

    printf("The middle number is: %d\n", middle);

    return 0;
}

