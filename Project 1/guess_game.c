//                              Do-While Loop ka use karke 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int X, Y, Z;
    Z = 0;

    srand(time(0)); 

    X = rand() % 100 + 1;

    printf("\n  \033[1;34m\3\3\3 WELCOME TO THE GUESS THE NUMBER GAME! \3\3\3\033[0m");
    printf("\n \033[1;34mI have chosen a number between 1 and 100\033[0m");

    do 
    {
        printf("\n  \033[1;32mTake a guess number => \033[0m ");
        scanf("%d", &Y);

        Z++;

        if (Y > X) 
        {
            printf(" \033[1;33mToo High! Please Try again\033[0m\n"); 
        }
        else if (Y < X) 
        {
            printf("\033[1;33mToo Low! Retry again.\033[0m\n");
        }
        else 
        {
            printf(" \033[1;37mCongratulations! You guessed the number in %d attempts.\033[0m\n", Z);
        }
    } while (Y != X);
}
