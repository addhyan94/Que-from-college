#include <stdio.h>
#include<conio.h>
int main() {
    int angle1, angle2, angle3, sum;

    // Input the angles of the triangle
    printf("Enter the three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Calculate the sum of angles
    sum = angle1 + angle2 + angle3;

    // Check if the sum is 180 and each angle is greater than 0
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Triangle formation is possible.\n");
    } else {
        printf("Triangle formation is not possible.\n");
    }

    return 0;
}
