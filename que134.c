/* WAP to print calculate of the series ..
                                        1- x^2/9+x^5/12-x^10/15+.....n terms */

#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int i,x,n,a,p,b,c;
    float s;
    p=2;
    b=9;
    c= 3; // First increment for power is 3
    printf("\n Enter a number= ");
    scanf("%d",&n);
   printf("\n Enter a X value = ");
   scanf("%d",&x);
   for ( i = 2; i <=n; i++)
   {
    //p=p+3;
   // b=b+3;
    a=pow(x,p);
    if (i%2==0)
            {
                s=s-(1.0*a)/b;
            }
            else
            {
                s=s+(1.0*a)/b;
            }
            /*Power ka pattern ye hai: 2,5,10,…. Yahan notice karo ki power ka increment har baar different hai:
            1--> 2 se 5 tak ka increment : 5-2=3 hoga .
            2--> 5 se 10 tak ka increment : 10-5=5 hoga 
Matlab, yeh series ek alternating pattern follow kar rahi hai: pehle 3 ka increment, phir 5 ka increment, aur aage bhi similarly increment hota rahega.*/
              p = p+c; // Increment power
              b =b+ 3; // Denominator always increases by 3

        // Alternate the increment value (3 and 5)
        if (c == 3)
        {
            c = 5;
        }
         else
        {
            c = 3;
        }
    
   }
   printf("\n sum= %.2f",s);
}