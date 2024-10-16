/* WAP to input two number amd calculate lcm and hcf of these number .
formula = first number / second number = lcm/hcf */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int num1, num2, hcf , lcm, i;
    hcf=1;
    printf("\n Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;  
        }
    }

    lcm = (num1 * num2) / hcf;

    printf("\nHCF of %d and %d = %d", num1, num2, hcf);
    printf("\nLCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}
