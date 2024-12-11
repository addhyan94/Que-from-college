//              union
// WAP to input a book name , pages number ,and publaction year of 5 book and display all values using union. 
#include<stdio.h>
#include<conio.h>
union Books
{
    char name[50];
    int pages;
    int year;
};
 union Books a[5];
void main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter %d Book Name : ",i+1);
        scanf("%s",&a[i].name);
        printf("Book Name Is %s",a[i].name);
        printf(" Enter %d Books Page Numbers : ",i+1);
        scanf("%d",&a[i].pages);
        printf("Pages Number Is %d",a[i].pages);
        printf(" Enter %d Book Publaction Year : ",i+1);
        scanf("%d",&a[i].year);
        printf(" publaction year Is %d",a[i].year);
    }
}
