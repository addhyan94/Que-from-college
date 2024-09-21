#include<stdio.h>
#include<conio.h>

int main()
 {
    int choice, area;
float a, b, c;
    printf("Choose an option:\n");
    printf("1. Calculate area of triangle using three sides\n");
    printf("2. Calculate area of triangle using base and height\n");
    scanf("%d", &choice);
printf("Enter the lengths of the three sides of the triangle:\n");
            scanf("%f %f %f", &a, &b, &c);
    switch (choice)
     {
        case 1:
        {
            if (a + b > c && a + c > b && b + c > a)
             {
                float s = (a + b + c) / 2; 
                area = sqrt(s * (s - a) * (s - b) * (s - c)); 
                printf("\n The area of the triangle is: %d", area);
            } 
            else
             {
                printf("Error: The lengths do not form a valid triangle.\n");
            }
            break;
        }
        case 2: 
        {
            float base, height;
            printf("Enter the base and height of the triangle:\n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height; 
            printf("The area of the triangle is: %d\n", area);
            break;
        }
        default:
            printf("Error: Invalid choice. Please select 1 or 2.\n");
            break;
    }
return 0;
}