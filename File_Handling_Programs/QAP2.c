// WAP to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fptr;
 fptr = fopen("Table.txt","w");
int n;
printf("Enter a Number for generate multiplication table : ");
scanf("%d",&n);
 for (int i = 0; i < 10; i++)
 {
    fprintf(fptr , "%d", n*(i+1));
    fprintf(fptr ,"%c", '\n');
 }
 fclose(fptr);
 printf("Aap ki Table ban gayi hai aapki File me dekh Lo ::: ");
}