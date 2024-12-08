//                      structure
// WAP to input a book name , pages number ,and publaction year of 5 book and display all values using structure . 
#include<stdio.h>
#include<conio.h>
struct Books
{
    char name[50];
    int pages;
    int year;
};
 struct Books a[5];
void main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter %d Book Name : ",i+1);
        scanf("%s",&a[i].name);
        printf(" Enter %d Books Page Numbers : ",i+1);
        scanf("%d",&a[i].pages);
        printf(" Enter %d Book Publaction Year : ",i+1);
        scanf("%d",&a[i].year);
    }
 printf("\n Books Name | Books Pages Numbers | Book Publaction Year ");
 for (int i = 0; i < 5; i++)
    {
        printf("\n    %s",a[i].name);
        printf("\t   %d",a[i].pages);
        printf("\t\t\t %d",a[i].year);
    }   
}

/*~~~Output 
Enter 1 Book Name : C Programing
 Enter 1 Books Page Numbers : 501
 Enter 1 Book Publaction Year : 2009

 Enter 2 Book Name : Computer
 Enter 2 Books Page Numbers : 516
 Enter 2 Book Publaction Year : 2012.
 and so on .......................................

 Books Name | Books Pages Numbers | Book Publaction Year
C Programing       501                    2009
 Computer          516                    2012 
  and so on.............................................
*/