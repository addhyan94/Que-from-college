#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int a,b;
    float c;
    printf("\n Enter the bace value=");
    scanf("%d",&a);
    printf("\n Enter the power value= ");
    scanf("%d",&b);
    c=pow(a,b);
printf("\n power of %d,%d =%.2f",a,b,c);
    return 0;
}