#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define MAX_VAL 100

struct Rec { 
    int X1; 
    char X2[50]; 
    float X3; 
};

struct Rec Data[MAX_VAL];
int Total = 0;

void FuncA() {
    if (Total < MAX_VAL) {
        printf("Enter Roll Number: ");
        scanf("%d", &Data[Total].X1);

        printf("Enter Name: ");
        scanf(" %[^\n]%*c", Data[Total].X2);

        printf("Enter Marks: ");
        scanf("%f", &Data[Total].X3);

        Total++;
        printf("\n Student added successfully!\n");
    } else {
        printf("Student list is full.\n");
    }
}

void FuncB() {
    if (Total == 0) {
        printf("\n No records to display.\n");
    } else {
        printf("\n Student Records:\n");
        for (int IDX = 0; IDX < Total; IDX++) {
            printf("\nRoll Number: %d\n", Data[IDX].X1);
            printf("  Name: %s\n", Data[IDX].X2);
            printf("  Marks: %.2f\n\n", Data[IDX].X3);
        }
    }
}

void FuncC() {
    int SearchKey;
    printf("Enter Roll Number to search: ");
    scanf("%d", &SearchKey);

    for (int IDX = 0; IDX < Total; IDX++) {
        if (Data[IDX].X1 == SearchKey) {
            printf("Record Found:\n");
            printf("Roll Number: %d\n", Data[IDX].X1);
            printf("Name: %s\n", Data[IDX].X2);
            printf("Marks: %.2f\n", Data[IDX].X3);
            return;
        }
    }
    printf("\n Record not found.\n");
}

int main() {
    int OPT;
    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d", &OPT);

        switch (OPT) {
            case 1: FuncA(); break;
            case 2: FuncB(); break;
            case 3: FuncC(); break;
            case 4: printf("\n Exiting..."); break;
            default: printf("\nERROR:: Invalid choice! Try again.");
        }
    } while (OPT != 4);
}
