//                  String 
/* WAP to input tow string and check whether these are equal or not. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int i,l,c,p;
printf("Enter first String : ");
gets(a);
l=strlen(a);
printf("Enter second String : ");
gets(b);
p=strlen(b);
    if (l==p)
    {
i=0;
while (i<l&&i<p)
{
        if (a[i]!=b[i])
        {
            c++;
            break;
        }
    i++;
}
    }
    if (c==0)
    {
        printf("string 1 and stringg 2 are equal ");
    }
    else
    {
        printf("String 1 amd string 2 are not equal ");
    }
}

/*~~Output- 1-
Enter first String : Hello
Enter second String : Hello
string 1 and stringg 2 are equal

~~~Output- 2-
Enter first String : Hii
Enter second String : HELLO
String 1 amd string 2 are not equal

*/