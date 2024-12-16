// Read kareme ke liye aapan fgetc ka use karte hai or WRITE karne ke liye aapan fputc ka use kate hai 

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("new.txt", "r");
     char c = fgetc(ptr); // used to read a character from file
    printf("%c", c);
    // fputc('H', ptr); // Putc ke aander kuch bhi likho matlab (' ')ke aander jo bhi likha ho uske bo us file me likh deta hai or ek he charater ko likhta ha
    return 0;
}
// File me se read and Write karne ke litye he aapana ko putc and getc ka use karte hai 
