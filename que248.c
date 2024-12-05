// //                  String 
// /*Wap to input a string and print in the givin Formate.
// Input string Manoj Kumar Verma output string M.K.Verma .    */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50],ch;
    int i,l,p;
    printf("\n enter string=");
    gets(a);
    l=strlen(a);
    printf("%c.",a[0]);
    for(i=l-1;i>=0;i--)
    {
        ch=a[i];
        if(ch==' ')
        {
            p=i;
            break;
        }
    }
    for(i=0;i<p;i++)
    {
        if(a[i]==' ')
        {
            printf("%c.",a[i+1]);
        }
    }
    for(i=p+1;i<l;i++)
    {
        printf("%c",a[i]);
    }
}












// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// //                          sahi ni hai kuki M.K.Verma nahi aa rha ahi M.K.V he aa rha hai 
// void main() 
// {
//     char a[50];
//     int i, l;
//     printf("Enter a string: ");
//     gets(a); 
//     l = strlen(a);
//     printf("%c.", a[0]);
//     int k;
//     k=i = 0;
//     while (i < l) 
//     {
//         if (a[i] == ' ' && a[i + 1] != '\0') 
//         {
//             printf("%c.", a[i + 1]);
//         }
//         i++;
//     }
//     printf(" \n aa gaya j loop ke pass ");
//     for (int j = l - 1; j >= 0; j--) 
//     {
//         printf("\n aa gaya j ke aander ");
//         if (a[j] == ' ') 
//         {
//             printf("%s", &a[j]); 
//             break;
//         }
//     }
//     printf(" \n aa gaya j loop ke bahar ");
// }
