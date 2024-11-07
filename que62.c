#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("\n enter your choice (1,2)=");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
printf("\n Hello Bundelkhand");;        /* code */
        break;
    case 2:
    printf("\n Hello universsti ");
    break;
    default:
        printf("\n Error: Your choice is wrong ");
    }

}