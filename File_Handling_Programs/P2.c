// ek esa program banao jo aapan open karte hai file ko bo he na ho aapne files list me to ek msg aaye ki file hai he nahi or agar ho to bo open ho jaye read mode me 
// File bani honi chiye 

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("text2.txt", "r");
    if(ptr == NULL)
    {
        printf("Bhai mere is naam ki file he nahi hai to open he kese kare isko \n");
        
    }
    else
    {
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
    
    }
    return 0;
}
