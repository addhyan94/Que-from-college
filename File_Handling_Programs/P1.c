//      File Handluing ka program first online 
//  Jo file open kar rahe hai usme jo number likha hai usko read karne ke liye hai ye program 

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("text.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The First number form my txt file is: %d \n", num);
  
    fscanf(ptr, "%d", &num);
    printf("The Second number from my txt file is : %d \n", num);
  
  fscanf(ptr, "%d", &num);
    printf("%d is third number form my txt file ",num);
  
  fclose(ptr);
    printf("\nhEnd me check karna perta hai bhia mere ");
}
