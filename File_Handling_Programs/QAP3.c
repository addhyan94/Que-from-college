// WAP read a text file character by character and write its content twice in separate file.
#include<stdio.h>
void main()
{
char ch;
FILE *fptr;
FILE *fptr2;

fptr = fopen("A3File.txt","r"); // Jo file open karni ho likho ex: ('file.txt','w')
fptr2 = fopen("A3File.1.txt","w");
while (1)
{
ch=fgetc(fptr);
if (ch == EOF)
{
    printf("\n\nAapki file me kuch ni hai aab :: ");
    printf(" \n\n AApki first file me jo tha uske twice ho cuka hai new file me matlab sab cheeze Double ho gayi hai DEKH LO BHAI \n ");
    break;
}
else
{
    fprintf(fptr2, "%c",ch);
    fprintf(fptr2, "%c",ch);
    printf("%c",ch);
}
}
fclose(fptr);
fclose(fptr2);
}