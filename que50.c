#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Print the numbers in ascending order
    if (num1 < num2) {
        printf("Ascending order: %d, %d\n", num1, num2);
    } else {
        printf("Ascending order: %d, %d\n", num2, num1);
    }

    return 0;
}
