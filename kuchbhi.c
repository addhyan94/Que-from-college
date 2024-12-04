// kuch to karna he hai na to kar rahe hai pprogram bana rahe hai 
//
//


/*#include <stdio.h>
#include <conio.h>

int main()
{
    int n,a,b,s,i,j;
    a=-1;
    b=1;
    printf("\n Enter a number= ");
    scanf("%d",&n);
    for ( i = 1; i <=n ; )
    {
        s=a+b;
        a=b;
        b=s;
        for ( j = a+1 ; j < b ; j++)
        {
           printf(" %d ",j);
           i++;
           if(i==n)
           break;
        }
        
    }
}*/
// second 
/*#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    a=18;
    b=13;
    printf("\n %d=%d ",a,b);
    printf("Ho gaya na equal aab batao ");
    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
 void main()
  {
    printf("\n Neha sahu");
  }
*/

/*#include<stdio.h>
#include<conio.h>
 void main()
 {

*/
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//   int a,b,c,d,e,f,g,h;
//   char ch,name,fname,mname,bname,sname;
//   printf("\n \t Enter first number jo aap ke maan me ho :::   ");
//   scanf("%d",&a);
//   printf("\n\t Enter second number jo aapke maan me ho :::  ");
//   scanf("%d",&b);
//   printf("\n Enter your name :::");
//   scanf("%c",&name);
// printf("\n Enter your Father Name :::  ");
// scanf("%c",&fname);
// printf("\n Enter your Mother Name :::  ");
// scanf("%c",&mname);
// printf("\n Enter your Brother Name :::  ");
// scanf("%c",&bname);
// printf("\n Enter your Sister Name :::  ");
// scanf("%c",&sname);


// }
//     pointer stritcher 
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int a ;
// int *p;
// a=15;
// p=&a;
// printf("\n%d",a);
// printf("\n%d",p);
// printf("\n%d",&a);
// printf("\n%d",&p);
// printf("\n%d",*(&a));
// printf("\n%d",*(&p));
// printf("\n%d",*p);
// }

//  hamesha pinter int value he hote hai 
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int a;
// float b;
// char c;
// int *p;
// float *q;
// char *r;

// }

//   ek pointer ke adresh  ko dushre pointer ke addresh me dalne ke liye 
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int a;
// int *p;
// int **q;
// a=20;
// p=&a;
// q=&p;
// printf("\n a= %d",a);
// printf("\n'&a'%d",&a);
// printf("\np=%d",p);
// printf("\nq=%d",q);
// printf("\n'&p'%d",&p);
// printf("\n'&q'%d",&q);
// printf("\n'*p'%d",*p);
// printf("\n'*q'%d",*q);
// printf("\n'**q'%d",**q);
// }

#include<stdio.h>
#include<conio.h>
int main()
{
  int *p;
int a=25,b=a;
p=&a;
printf("\n a=%d",a);
printf("\n b=%d",b);
printf("\n p=%d",p);
b=b+10;
printf("\nb+15 karne ke baad \n");
printf("\n a=%d",a);
printf("\n b=%d",b);
*p=*p+15;
printf("\n*p karne ke baad \n");
printf("\n a=%d",a);
printf("\n b=%d",b);
printf("\n p=%d",p);
}