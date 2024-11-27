//                  String 
/* WAP to input a string amd calculate total number of special. */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char array[50],ch;
int i,s,l;
printf("Enter a String: ");
gets(array);
l=strlen(array);
s=i=0;
while (i<l)
{
    ch=array[i];
    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch==' ')))
    {
    s++;
    }
    i++;
}
printf("total number of special=%d",s);
} 

/*~~~Output- 
Enter a String: Tiwwariji94@gmail.com!@# 
total number of special=5
----------------------------------------------------------
 (@,.,!,@,#) for elplane 
*/