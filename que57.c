#include <stdio.h>
#include <conio.h>

int main()
 {
    int distance;
    float fare = 0;

    // Input the distance traveled
    printf("Enter the distance traveled (in km): ");
    scanf("%d", &distance);

    // Calculate the taxi fare based on the given conditions
    if (distance <= 10) {
        fare = 100; // Fixed fare for the first 10 km
    } else if (distance <= 30) {
        fare = 100 + (distance - 10) * 9; // Rs. 9/km for the next 20 km
    } else if (distance <= 80) {
        fare = 100 + 20 * 9 + (distance - 30) * 7; // Rs. 7/km for the next 50 km
    } else {
        fare = 100 + 20 * 9 + 50 * 7 + (distance - 80) * 5; // Rs. 5/km for above 80 km
    }

    // Output the final fare amount
    printf("Your total taxi fare is: Rs. %.2f\n", fare);

    return 0;
}
