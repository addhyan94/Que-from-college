#include <stdio.h>
#include <conio.h>
int main()
 {
    int distance;
    float fare = 0;
    printf("Enter the distance traveled (in km): ");
    scanf("%d", &distance);
    if (distance <= 10)
     {
        fare = 100; 
    } 
    else if (distance <= 30)
     {
        fare = 100 + (distance - 10) * 9; 
    } 
    else if (distance <= 80)
     {
        fare = 100 + 20 * 9 + (distance - 30) * 7; 
    } 
    else 
    {
        fare = 100 + 20 * 9 + 50 * 7 + (distance - 80) * 5; 
    }
    printf("Your total taxi fare is: Rs. %.2f\n", fare);
}
