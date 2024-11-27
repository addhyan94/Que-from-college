//                  String 
/* WAP to input a string and chack it is palindrine or not Without using strrev function .*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[40];
int i,s,l;
printf("Enter a number: ");
gets(a);
l=strlen(a);
i=0;
while (i<l)
{
    b[i]=a[l-i-1];
    i++;
    }
 b[i] = '\0'; // Null terminate the reversed string hai bhai
 printf("Your string is : %s : \n",b); // %s ka kaam hai string dena || jo us variable me dala hai ||
s=strcmp(a,b);
if (s==0)
{
    printf(" palindrine Hai");
}
else
{
    printf(" palindrine Nahi hai ");
}

}

/*~~~Output- 1:
Enter a number: madam
Your string is : madam : 
 palindrine Hai

~~~Output- 2:
Enter a number: Tiwari
Your string is : irawiT : 
 palindrine Nahi hai

*/