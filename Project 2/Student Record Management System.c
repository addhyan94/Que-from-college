#include <stdio.h>
#include<conio.h>

#define MAX_STUDENTS 100  //  mare school me isse jada bacche na hai to aab yahe hai Maximum number 

// Structure banaya hai baccho ki details store karne ke liye
struct Student 
{
    int rollNumber;       // Roll Number store karne ke liye
    char name[50];        // baccho  ka naam store karne ke liye
    float marks;          // baccho ke marks store karne ke liye
};

struct Student students[MAX_STUDENTS];  // Array banaya students ke records store karne ke liye
int studentCount = 0;                   // Ab tak total students kitne add hue hain yeh track karne ke liye

// ek baccha add karne ke liye hai bhai - ek ek karke he to 100 ban jayege 
void addStudent()
{
    // agar baccho ki list me jage hai to add to kargehe naa 
    if (studentCount < MAX_STUDENTS) 
    {
        printf("Enter Roll Number: "); // User se roll number input kara rahe jisse aapan ko pata chal paye 
        scanf("%d", &students[studentCount].rollNumber);// Structure banaya tha uper usko call kiya fer uske aander rollnumber ko call kiya 

        printf("Enter Name: ");        // User se naam input le rahe hain
        scanf(" %[^\n]%*c", students[studentCount].name); // jab naam lenge to usme space bhi aayega to uske liye kuch to karna he hoga to ye kar diya 

        printf("Enter Marks: ");       // User se marks input le rahe hain
        scanf("%f", &students[studentCount].marks);

        studentCount++;                // ek bacche ke bbad dushra aageya isliye count badha diya 
        printf("Student added successfully!\n"); // batana bhi parega na Confirmation ho gaya bhaiii
    } 
    else 
    {
        printf("Student list is full.\n");  // hamare pass jage he naa hai to batana to parta hai naa 
    }
}

// aab bacche hai to dekhana bhi parega naa isliye 
void displayStudents() 
{
    // agar hamare school me bacche he naaa hai to yr bhi batana parega naaaaaa 
    if (studentCount == 0) 
    {
        printf("No records to display.\n");
    } 
    else 
    {
        printf("\nStudent Records:\n");
        for (int i = 0; i < studentCount; i++) // aab itne sare bacche hai to sabhi ko batane ke liye loop use karte hai bhaiii 
        {
            printf("Roll Number: %d\n", students[i].rollNumber); // Roll number print
            printf("Name: %s\n", students[i].name);              // Naam print
            printf("Marks: %.2f\n\n", students[i].marks);        // Marks print
        }
    }
}

// aab pata bhi kese chale kiska roll number hai to search bhi karna parega baccho ko 
void searchStudent() 
{
    int roll;
    printf("Enter Roll Number to search: "); //chalo dethe hai roll number yaad hai ya nahi ' dal doo aapna Roll no..'
    scanf("%d", &roll);

    // agar sahi dala hai roll number to check he kar lete hai bhaiii 
    for (int i = 0; i < studentCount; i++) 
    {
        // jab rool number yaad karke mil jaye to batana bhi parta hai naa 
        if (students[i].rollNumber == roll) 
        {
            printf("Record Found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;// jab iske aange kuch hai he naa to wapus bhi bhejna parega naaa
        }
    }
    // Jab roll number he bhul jaye to batana jaruri hai naa 
    printf("Record not found.\n");
}

int main() 
{
    int choice;
    do {
        // aab jo choice karni hai bo pata bhi to honi chiye naa 
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // User choice ke according appropriate function call karte hain naa
        switch (choice) 
        {
            case 1: 
            addStudent(); // call kiya kuki Student add karna hai
                    break;
            case 2: 
            displayStudents(); // call kiya kuki Sabhi students ko display karna hai
                    break;
            case 3: 
            searchStudent(); // call kiya kuki Student search karna hai
                    break;
            case 4: 
            printf("\n Exiting..."); // aab kuch karna he nahi to chalo bahar 
                    break;
            default: 
            printf("\nERROR:: Invalid choice! Try again."); // jab userdekh kar bhi sahi na dale 
        }
    } while (choice != 4); // loop jab band hoga jab user 4  dale 
}
