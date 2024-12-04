//                  String 
/*Wap to input a string and print in the givin Formate.
Input string Manoj Kumar Verma output string M.K.Verma .    */
#include<stdio.h>
#include<conio.h>
#include<string.h>
//                          sahi ni hai kuki M.K.Verma nahi aa rha ahi M.K.V he aa rha hai 
void main() 
{
    char a[50];
    int i, l;
    printf("Enter a string: ");
    gets(a); 
    l = strlen(a);
    printf("%c.", a[0]);
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
