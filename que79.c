/* WAP to print first n even number .*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <=n; i++)
    {
      a=i+i;
      printf("\n %d",a);
    }
    
    return 0;
}