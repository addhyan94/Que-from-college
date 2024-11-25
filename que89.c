/* wap to input a number and print only factor of this number. for ex- if number is 8 = 1,2,4,8 */

#include <stdio.h>
#include<conio.h>

int main()
{
    int n, i;

    printf("\n\t Enter a number: "); // \t ,, Tab lagane ke liye use kiya ja raha hai jisse output me aacha lage.....
    scanf("%d", &n);

    printf("\n Factors of %d are: ", n);
    for (i = 1; i <= n; i++)
     {
        if (n % i == 0) 
        {
            printf("%d ", i); 
        }
    }
}
