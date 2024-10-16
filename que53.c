#include <stdio.h>
#include<conio.h>
int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Logic to print numbers in descending order
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Descending order: %d, %d, %d\n", num1, num2, num3);
        } else {
            printf("Descending order: %d, %d, %d\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Descending order: %d, %d, %d\n", num2, num1, num3);
        } else {
            printf("Descending order: %d, %d, %d\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("Descending order: %d, %d, %d\n", num3, num1, num2);
        } else {
            printf("Descending order: %d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}
