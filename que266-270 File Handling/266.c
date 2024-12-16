//              File Handling 
// WAP to open a file and write a charater to this file if file name is file1.txt.
#include<stdio.h>
void main()
{
FILE *ptr;
char ch;
ptr = fopen("file1.txt","w"); 
if (ptr==NULL)
{
    printf("File He nahi hai aapki list me:: ");
}
else
{
    printf("Enter a Charater :  ");
    scanf("%c",&ch);
    fputc(ch,ptr);
}
fclose(ptr);
printf("Your File has been changed! Check it.");
}