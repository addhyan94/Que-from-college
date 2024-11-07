#include <stdio.h>
#include <conio.h>

int main()
 {
    int days;
    char roomType;
    float roomCharge = 0, totalCharge = 0, serviceCharge = 0;

    // Input the number of days and room type
    printf("Enter the number of days stayed: ");
    scanf("%d", &days);
    
    printf("Enter room type (a for A/C, n for Non-A/C): ");
    scanf(" %c", &roomType);

    // Calculate the room charges based on days and room type
    if (roomType == 'a' || roomType == 'A') {
        // A/C Room Charges
        if (days <= 5) {
            roomCharge = days * 5000;
        } else if (days <= 15) {
            roomCharge = 5 * 5000 + (days - 5) * 4500;
        } else if (days <= 40) {
            roomCharge = 5 * 5000 + 10 * 4500 + (days - 15) * 4200;
        } else {
            roomCharge = 5 * 5000 + 10 * 4500 + 25 * 4200 + (days - 40) * 3500;
        }
    } else if (roomType == 'n' || roomType == 'N') {
        // Non-A/C Room Charges
        if (days <= 5) {
            roomCharge = days * 3000;
        } else if (days <= 15) {
            roomCharge = 5 * 3000 + (days - 5) * 2700;
        } else if (days <= 40) {
            roomCharge = 5 * 3000 + 10 * 2700 + (days - 15) * 2500;
        } else {
            roomCharge = 5 * 3000 + 10 * 2700 + 25 * 2500 + (days - 40) * 2000;
        }
    } else {
        printf("Invalid room type entered!\n");
        return 1;
    }

    // Calculate service charge (50% of the room charge)
    serviceCharge = roomCharge * 0.5;

    // Calculate total charge
    totalCharge = roomCharge + serviceCharge;

    // Output the total charges
    printf("Your total hotel charges are: Rs. %.2f (Including 50%% room service charge)\n", totalCharge);

    return 0;
}
