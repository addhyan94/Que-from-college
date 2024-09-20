#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float o,i,f;
    printf("\n Enter the objest distance in CM =");
    scanf("%f",&o);
        printf("\n Enter the image distance in CM =");
        scanf("%f",&i);
            f=(o*i)/(o+i);
            printf("\n Focal length of the lens =%f",f);
        return 0;
}