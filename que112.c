<<<<<<< HEAD
/*112....  WAP to print tribinocci serise 
                                0,1,1,2,4,7,13,24... n terms */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, s, a, b, c, i;
    a = 0; 
    b = 1; 
    c = 1; 

    printf("\n Enter a number = ");
    scanf("%d", &n); 

    printf("Tribonacci Series: ");
    if (n >= 1) printf("%d, ", a);
    if (n >= 2) printf("%d, ", b);
    if (n >= 3) printf("%d, ", c);

    for (i = 4; i <= n; i++) 
    {
        s = a + b + c; 
        printf("%d, ", s);
        a = b; 
        b = c; 
        c = s; 
    }
}

=======
/*112....  WAP to print tribinocci serise 
                                0,1,1,2,4,7,13,24... n terms */

#include <stdio.h>
#include<conio.h>

int main()
 {
    int n, s, a, b, c, i;
    a = 0; 
    b = 1; 
    c = 1; 

    printf("\n Enter a number = ");
    scanf("%d", &n); 

    printf("Tribonacci Series: ");
    if (n >= 1) printf("%d, ", a);
    if (n >= 2) printf("%d, ", b);
    if (n >= 3) printf("%d, ", c);

    for (i = 4; i <= n; i++) 
    {
        s = a + b + c; 
        printf("%d, ", s);
        a = b; 
        b = c; 
        c = s; 
    }
}

>>>>>>> 2d7c4a7595c9e06094366219d96ea287f5bec18c
