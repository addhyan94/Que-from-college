<<<<<<< HEAD
/* Wap to input a number and check it is armstrong number or not . 
a number is armstrong if sum of power of each  digit ( Power = number of digits ) = number   */
                                                            
#include <stdio.h>
#include<conio.h>
#include <math.h> 

int main() 
{
    int n, remainder, result, digits,j,i;
    result=0;
    digits=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    
    for (i = n; i > 0; i = i / 10) 
    {
        digits++;
    }

    for (j = n ; j> 0 ; j= j/ 10)
    
     {
        remainder = j % 10;  
        result =result+ pow(remainder, digits); 
    }

    
    if (result == n)
     {
        printf("\n %d is an Armstrong number.", n);
    } 
    else 
    {
        printf("\n %d is not an Armstrong number.",n);
    }

    return 0;
}
=======
/* Wap to input a number and check it is armstrong number or not . a number is armstrong if sum of power of each  digit ( Power = number of digits ) = number   */
                                                            
#include <stdio.h>
#include<conio.h>
#include <math.h> 

int main() 
{
    int n, o, remainder, result, digits,j,i;
result=0;
digits=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    o = n;  // 'n' ki value ko 'o' me store karaya hai ....
    
    for (i = n; i > 0; i = i / 10) 
    {
        digits++;
    }

    for (j = n ; j> 0 ; j= j/ 10)
    
     {
        remainder = j % 10;  
        result =result+ pow(remainder, digits); 
    }

    
    if (result == o)
     {
        printf("\n %d is an Armstrong number.", o);
    } 
    else 
    {
        printf("\n %d is not an Armstrong number.", o);
    }

    return 0;
}
>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
