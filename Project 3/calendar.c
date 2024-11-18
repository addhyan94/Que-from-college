#include<stdio.h>  // Standard input/output library ko include kar rahe hai
#include<conio.h>   // Console input/output ki functions ke liye
#include<windows.h> // Windows-specific functions ke liye
#include<time.h>    // Time-related functions ke liye

#define TRUE    1   // TRUE ko define kar rahe hai, jo 1 ke barabar hai
#define FALSE   0   // FALSE ko define kar rahe hai, jo 0 ke barabar hai

// Function declarations (yeh functions aage define honge)
int calendar(int, int);             // Calendar display function
int determineleapyear(int);         // Leap year check karne wala function
int determinedaycode(int);         // Day code calculate karne wala function
int inputyear();                   // Year input lene wala function

// Days in month array (yahan hum days ka data store karenge month ke hisab se)
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

// Months ka array, yeh hum use karenge month names ko display karne ke liye
char *months[] = {
    " ",  // Empty string for 0th index (no month)
    "\n\n\nJanuary", 
    "\n\n\nFebruary", 
    "\n\n\nMarch", 
    "\n\n\nApril", 
    "\n\n\nMay", 
    "\n\n\nJune", 
    "\n\n\nJuly", 
    "\n\n\nAugust", 
    "\n\n\nSeptember", 
    "\n\n\nOctober", 
    "\n\n\nNovember", 
    "\n\n\nDecember" 
};

int main()
{
    int year, daycode, leapyear;
    
    year = inputyear();  // User se year input kar rahe hai
    daycode = determinedaycode(year);  // Day code calculate kar rahe hai
    determineleapyear(year);  // Leap year check kar rahe hai
    calendar(year, daycode);  // Calendar print kar rahe hai
    printf("\n");  // Ek newline print kar rahe hai
}

// Year input lene wala function hai 
int inputyear()  
{
    int year;
    
    printf("Please enter a year (example: 2022) : ");  // User ko year input ke liye keh rahe hai
    scanf("%d", &year);  // User se year input kar rahe hai
    return year;  // Jo year input kiya hai, use ko return kar rahe hai
}

// Day code calculate karne wala function hai 
int determinedaycode(int year)  
{
    int daycode;
    int d1, d2, d3;
    
    // Year ka day code calculate kar rahe hai, d1, d2, d3 har ek part ka calculation hai
    d1 = (year - 1.) / 4.0;
    d2 = (year - 1.) / 100.;
    d3 = (year - 1.) / 400.;
    
    // Final day code calculate kar rahe hai (yeh 0 se 6 ke beech hota hai)
    daycode = (year + d1 - d2 + d3) % 7;
    return daycode;  // Day ka code return kar rahe hai
}

// Leap year check karne wala function hai 
int determineleapyear(int year)  
{
    // Agar leap year hai to February me 29 days hote hai to bus dekh le tu 
    if (year % 4 == FALSE && year % 100 != FALSE || year % 400 == FALSE) 
    {
        days_in_month[2] = 29;  // February me 29 days kar rahe hai to hona bhi chiye 
        return TRUE;  // Leap year ko return kar rahe hai
    } 
    else 
    {
        days_in_month[2] = 28;  // February me 28 days he hai to 
        return FALSE;  // Non-leap year ko return kar rahe hai 28 hee 
    }
}

// Calendar print karne wala function hai 
int calendar(int year, int daycode)  
{
    int month, day;
    
    // Har ek month ke liye loop chala rahe hai yr 
    for (month = 1; month <= 12; month++)  
    {
        printf("%s", months[month]);  // Month name print to karna he parega 
        printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");  // Week days print to karna he parega 
        
        // First day ke liye spaces add kar rahe hai, taaki calendar acche se align ho or user ko aacha bhi lage yr 
        for (day = 1; day <= 1 + daycode * 5; day++)  
        {
            printf(" ");  // Space print kar rahe hai
        }
        
        // Ab har ek month ke days ko print to karna he parega naa
        for (day = 1; day <= days_in_month[month]; day++)  
        {
            printf("%2d", day);  // Day ko print to karna he parega  bhai  
            
            // Agar week ka end nahi hua hai to space de rahe hai jisse aacha lage yr 
            if ((day + daycode) % 7 > 0)  
                printf("   ");
            else
                printf("\n ");  // Agar week complete ho gaya to new line start to karna he parega bhai barna ek he month me sare moth nahi aa sakte 
        }
        // Agle month ke liye daycode update to hona he chiye broo
        daycode = (daycode + days_in_month[month]) % 7;
    }
}
