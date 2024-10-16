/* 116...  WAP to print sum of following series ..
                                        1+4+7+10.....n terms .*/ 

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, i,a,d,t,sum;
     a = 1; 
     d = 3; 
     sum=0;

    printf("\n Enter the number = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        t = a + (i * d); 
        sum = sum+t; 
    }
    printf("Sum of the series 1 + 4 + 7 + ... for %d terms is: %d\n", n, sum);

}
