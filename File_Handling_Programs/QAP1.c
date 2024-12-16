 // WAP to read three Integers value from file .
 #include<stdio.h>
 int main()
 {
  FILE *ptr;
 ptr = fopen("text.txt","r");
 int num1,num2,num3;
 fscanf(ptr,"%d",&num1);
 printf("\nThe First number is : %d ",num1);

 fscanf(ptr,"%d",&num2);
 printf("\nThe Second number is : %d ",num2);
 
 fscanf(ptr,"%d",&num3);
 printf("\nThe Third number is : %d ",num3);
fclose(ptr);
 }
