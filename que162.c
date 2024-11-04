/* WAP to follow series ....
    *
   ###
  *****
 #######
**********
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;

   for ( i = 1 ; i<=5 ; i++)
   {
      for(j=4;j>=i;j--)
      {
         printf(" ");
      }
      for(k=1;k<=(2*i)-1;k++)
      {
          if (i % 2 == 0)
             {
                printf("#");
            } 
            else
             {
                printf("*");
            }
      }
      printf("\n");
   }
   
}