// WAP to modify a file containing an integer to double its value.
#include<stdio.h>
void main()
{
FILE *fptr;
int num;
fptr = fopen("doublenum.txt","r"); 
fscanf(fptr ,"%d" ,&num);
fclose(fptr);

fptr = fopen("doublenum.txt","w"); 
fprintf(fptr ,"%d" ,2*num);
fclose(fptr);

printf("\n Aap ki file me jo number hai bo Double kar deta hai BAN GAYI HAI DEKH LO BHAI : :");
}