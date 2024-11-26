//                              usning Arrays With Functions 

/*WAP to input 5 elements into an array and arrange the elements in ascending order.*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[5],i,j,min,pos,t;
for ( i = 0; i < 5; i++)
{
    printf("\n%d : Inder || Enter Elements : ",i);
    scanf("%d",&a[i]);
}
    for(i=0;i<4;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<=4;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
        if(pos != i)
        {
            t=a[i];
            a[i]=a[pos];
            a[pos]=t;
        }
    }
    for(i=0;i<=4;i++)
    {
        printf(" order = %d",a[i]);
    }
}