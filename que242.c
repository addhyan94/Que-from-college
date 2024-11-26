//                  String 
/* WAP to input a staring calculate total number of uper case and total number of lower case . */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char array[50],ch;
int uc,l,lc;
printf("Enter a string : ");
gets(array);
l=strlen(array);
uc=0;
lc=0;
int i=0;
while(i<l)
{
    ch=array[i];
    if (ch>='A' && ch<='Z')
    {
        uc++;
    }
    else if (ch>='a' && ch<='z')
    {
        lc++;
    }
    i++;
}
printf(" %d is Uc Number",uc);
printf("\n %d is Lc Number",lc);
}

/*~~~Output-
Enter a string : Hello Word From India
 4 is Uc Number
 14 is Lc Number

*/