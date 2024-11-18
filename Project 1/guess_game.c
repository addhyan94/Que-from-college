//                              Do-While Loop ka use karke 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // Random functions jaise rand() aur srand() ke liye library
#include <time.h>   // Time functions jaise time() ke liye library, jo random number ka seed set karne me help karta hai

int main() 
{
    int num, guess, guess_num;
    guess_num = 0;

    // srand(time(0)) random number generator ka seed set karta hai, taki har run par alag number miljaye
    srand(time(0)); 

    // 1 se 100 ke beech random number generate karne ke liye
    num = rand() % 100 + 1; // rand() % 100 0-99 ke beech random number deta hai; +1 se yeh 1 to 100 ban jaata hai

    // Game ka welcome message
    printf("\n  \033[1;34m\3\3\3 WELCOME TO THE GUESS THE NUMBER GAME! \3\3\3\033[0m"); // (" \3 ") ka use DILL banane ke liye kar rahe hai 
    printf("\n \033[1;34mI have chosen a number between 1 and 100\033[0m");// (" \033[1;34m ") likha hai useka use colour dalne me karte hai aapan

    // do-while loop
    do 
    {
        // User ko number guess karne ke liye msg
        printf("\n  \033[1;32mTake a guess number => \033[0m ");
        scanf("%d", &guess);

        // Har attempt par guess ki counting badhne ke liye
        guess_num++;

        // Agar guess , random number se bada hai
        if (guess > num) 
        {
            printf(" \033[1;33mToo High! Please Try again\033[0m\n"); 
        }
        // Agar guess , random number se chhota hai
        else if (guess < num) 
        {
            printf("\033[1;33mToo Low! Retry again.\033[0m\n");
        }
        // Agar guess , random number he hai
        else 
        {
            // User ko congratulate karte hain aur attempt count batadete hain
            printf(" \033[1;37mCongratulations! You guessed the number in %d attempts.\033[0m\n", guess_num);
        }
    } while (guess != num); // Loop tab tak chalega jab tak user sahi number guess nahi karta
}
