/* WAP to input redius of circle calculate and print it is area using function . */

#include <stdio.h>
#include <conio.h>
void area(float);
int main()
 {
    float a;
    printf("\n Enter the radius of the circle: ");
    scanf("%f",&a);
    area(a);
}

void area(float r)
 {
    float b;
    b = 3.14 * r * r;
    printf("\n Area of the circle: %f",b);
}
