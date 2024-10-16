#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("\n Enter Two number =");
    scanf("%d%d",&a,&b);
    c=a/b;
    switch (c)
    {
    case 0:
        printf("\n %d This is the gratest  number ",b);
        break;
    default:
        printf("\n %d This is the gratest number ",a);

    }
    return 0;
}