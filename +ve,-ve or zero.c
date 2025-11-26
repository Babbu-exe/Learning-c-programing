#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter an integer: ");

    // Read the integer from the user
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0; // Indicate successful execution
}
