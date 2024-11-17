/*WAP to input n and r and ncr = n!/r!*(n-r)! using function with return value.*/

#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
 int n, r, d, fn, fr, fd;
 float c;
 printf("\n Enter a \" n \" value: ");
 scanf("%d",&n);
 printf("\n Enter a \" r \" value: ");
 scanf("%d",&r);
 d=n-r;
 fn=fact(n);
 fr=fact(r);
 fd=fact(d);
 c=1.0*(fn/fr*fd);
 printf("\n Formula (ncr = n!/r!*(n-r)! ) : Answer is = %f",c);
 }
 int fact(int x)
 {
    int i,f=1;
    for ( i = 1 ; i <=x; i++)
    {
        f=f*i;
    }
    return(f);
 }