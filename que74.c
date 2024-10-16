/* WAP to print first five even number .*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,a;
    for ( i = 1; i <=5 ; i++)
    {
      a=i+i;
      printf("\n %d",a);
    }
    
    return 0;
}