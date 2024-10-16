#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c,ans;
    printf("\n Enter the first number for using this menu =");
    scanf("%d",&a);
    printf("\n Enter the second number for using this menu =");
    scanf("%d",&b);
          printf("\n Choice one case ");
         printf("\n case 1 for sum  ");
      printf("\n case 2 for subtration ");
     printf("\n case 3 for divided  ");
    printf("\n case 4 for multiply  ");
        printf("\n Enter your choice = ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        ans=a+b;
            printf("\n%d this is your sum value",ans);
                        break;
        case 2:
        ans=a-b;
             printf("\n%d this is your subtration value",ans);
                        break;
        case 3:
        ans=a/b;
             printf("\n %d this is your division value ",ans);
                         break;
        case 4:
        ans=a*b;
             printf("\n %d this is your multiply value ",ans);
                         break;
        default:
            printf("\n ERROR :: Your Choice is Wrong ");
        }
    return 0;
}