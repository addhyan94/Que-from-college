//                  String 
// WAP to input a string calculate nuumber of vowels

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char array[50],ch;
int i,l,c;
c=0;
printf(" Enter a string : ");
gets(array);
l= strlen(array);
i=0; 
while (i<l)
{
    ch=array[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        c++;
    }
 i++;
}
    printf(" Number of vowels = %d",c);
}

/*~~Output-
Enter a string : Tiwari ji 
 Number of vowels = 4

*/
