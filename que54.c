#include <stdio.h>

int main() {
    int days, fine = 0;

    // Input the number of days
    printf("Enter the number of days:\n");
    scanf("%d", &days);

    // Calculate fine based on conditions
    if (days <= 10) {
        fine = 0;  // No fine for the first 10 days
    } else if (days <= 20) {
        fine = (days - 10) * 1;  // 1 rupee per day for next 10 days
    } else if (days <= 45) {
        fine = 10 + (days - 20) * 3;  // 3 rupees per day for next 25 days
    } else {
        fine = 10 + 75 + (days - 45) * 5;  // 5 rupees per day for above 45 days
    }

    // Print the total fine
    printf("Total fine: %d rupees\n", fine);

    return 0;
}
