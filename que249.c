//                  String 
/*Wap to input a string and print in the givin formate 
Input string Manoj Kumar Verma Outut string M.K.V.      */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
    char a[50];
    int i, l;
    printf("Enter a string: ");
    gets(a); 
    l = strlen(a);
    printf("%c.", a[0]);//aapan ko phela word chiye to hai he 
    i = 0;
    while (i < l)
     {
        if (a[i] == ' ' && a[i + 1] != '\0')
         {
            printf("%c.", a[i + 1]);
        }
        i++;
    }

    for (int j = l - 1; j >= 0; j--) 
    {
        if (a[j] == ' ')
         {
            printf("%s", &a[j + 1]); 
            break;
        }
    }
}

/*~~~Output- 
Enter a string: Manoj Kumar Verma 
M.K.V

*/
