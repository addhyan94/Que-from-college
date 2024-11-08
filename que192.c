/* WAP to input length and breath of a rectangle calculate  and print its area and parameter using function.*/
#include <stdio.h>
#include <conio.h>
void calculate(float, float);

int main() {
    float length, breadth;
    printf("\n Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("\n Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    calculate(length, breadth);
}

void calculate(float l, float b) 
{
    float area = l * b;
    float perimeter = 2 * (l + b);
    printf("\n Area of the rectangle: %f", area);
    printf("\n Perimeter of the rectangle: %f", perimeter);
}
