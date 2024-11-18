#include <stdio.h>      // Standard Input/Output library include kar rahe hai
#include <stdlib.h>     // Standard library functions ke liye
#include <time.h>       // Time-related functions ke liye

int main() 
{
    int h, m, s;                       // Variables to store hours, minutes, and seconds
    struct tm *currentTime;            // System time ka structure banaya
    time_t rawTime;                    // Raw time data hold karne ke liye variable
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; // Days of the week array

    // User se hour, minute aur second input lene ke liye
    printf("\nSet Hour (0-23): ");  
    scanf("%d", &h);  
    printf("Set Minute (0-59): ");  
    scanf("%d", &m);  
    printf("Set Second (0-59): ");  
    scanf("%d", &s);  

    // Input validation (galat time enter karne se rokne ke liye)
    if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) 
    {  
        printf("\nERROR! Invalid time entered.\n");  // Agar input invalid hai, error message dikhate hai
        return 1;  // Program ko end karte hai
    }

    while (1)
     {  // Infinite loop banate hai, clock continuously chalti rahe
        time(&rawTime);                     // System se raw time fetch karte hai
        currentTime = localtime(&rawTime);  // Raw time ko local time structure me convert karte hai

        // User ke input se time ko manually update karte hai
        currentTime->tm_hour = h;  
        currentTime->tm_min = m;  
        currentTime->tm_sec = s;  

        // Seconds, minutes aur hours ka logic adjust karte hai
        s++;  // Second badhate hai
        if (s > 59)
         {  // Agar seconds 59 se zyada ho jaye to minute badhao
            m++;
            s = 0;  // Seconds ko reset karo
        }
        if (m > 59) 
        {  // Agar minutes 59 se zyada ho jaye to hour badhao
            h++;
            m = 0;  // Minutes ko reset karo
        }
        if (h > 23)
         {  // Agar hours 23 se zyada ho jaye to reset karo (24-hour format)
            h = 0;  
        }

        system("cls");  // Screen clear karte hai (Windows-specific command)
        printf("\n\n\n\t\t___________________  REAL-TIME CLOCK  ___________________\n");
        printf("\t\t       Time: %02d:%02d:%02d\n", h, m, s);  // Time print karte hai
        printf("\t\t       Day:  %s\n", days[currentTime->tm_wday]);  // Current day print karte hai
        printf("\t\t       Date: %02d\n", currentTime->tm_mday);      // Current date print karte hai
        printf("\t\t       Month: %02d\n", currentTime->tm_mon + 1);  // Current month print karte hai
        printf("\t\t       Year: %d\n", currentTime->tm_year + 1900); // Current year print karte hai
        printf("\n\t\t_________________________________________________________\n");
        printf("\n\t\t           <<MADE BY ADDHYAN TIWARI>>\n");  // Signature line ;)

        _sleep(1);  // Ek second ka delay daalte hai (Windows ke liye)
    }
}
