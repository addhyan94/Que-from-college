//  aabhi tak aapan read mood me the matlab 'r' mood me chala rahe the aab aapan Write mood me chala hai matlab 'w' mood me 

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text1.txt", "w"); // jis file jka naam likho write mode per agae bo file aapki file list me ho bhi na to bhi aapona progrma usko bana deta hai (new file) 
    int num=2558; // us file me aapna ye bala number pahuch jayega 
    fprintf(fptr, "%d",  num);  // w mode me fprintf he use hota hai pata ho to 
    fclose(fptr);
    return 0;
}
