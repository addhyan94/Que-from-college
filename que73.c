/*  WAP to print first five perfect square number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,a;
    for ( i = 0; i <5; i++)
    {
      a=i*i;
      printf("\n %d",a);
    }
    
    return 0;
}