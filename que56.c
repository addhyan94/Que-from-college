#include <stdio.h>
#include <conio.h>

int main()
 {
    int units;
    float bill = 100; // Rs. 100 meter charges

    // Input number of units
    printf("Enter the number of units: ");
    scanf("%d", &units);

    // Calculate the electricity bill based on the given conditions
    if (units <= 100) 
    {
        bill += units * 1; // Rs. 1 per first
    } 
    else if (units <= 250)
     {
        bill += 100 * 1 + (units - 100) * 4; // Rs. 4 per 150
    } 
    else if (units <= 650) 
    {
        bill += 100 * 1 + 150 * 4 + (units - 250) * 9; // Rs. 9 per 400
    } 
    else
     {
        bill += 100 * 1 + 150 * 4 + 400 * 9 + (units - 650) * 15; // Rs. 15 per 650
    }

    printf("Your total electricity bill is: Rs. %.2f\n", bill);

    return 0;
}
