/*WAP to input a number and check it is megic number or not using function with return value */

#include<stdio.h>
#include<conio.h>

int sum(int);
int digit(int);

int main()
{
    int n,v;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    v=digit(n);  // digit naam ke bande ko call kar diya 
    if (v==1)
    {
        printf("\n %d is maggic number ",n);
    }
    else
    {
        printf("\n %d is not a magic number ",n);
    } 
}
int digit(int x) // le bhai isne call utha liya aapna 
{
    int i;
    while (i>9)
    {
        i = sum(i);// isne bhi aapne bande ko call kar diya
    }
    return(i);// aapne ne call kiya tha aab ja raha wahi per 
}
int sum(int y)// isne bhi digit ka call utha liya 
{
    int j,s,r;
    j=y;
    s=0;
    while (j>0)
    {
        r=j%10;
        s=s+r;
        j=j/10;
    }
    return(s);  // digit ne call kiya tha aab ja raha wahi per 
}