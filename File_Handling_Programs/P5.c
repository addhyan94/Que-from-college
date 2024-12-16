// Jo aapan ne file me likha hai bo sab ka sab print kardeta hai all contant print kar deta hai 
// Phale se file bani honi chiye jisme kuch likha ho tabhi aayega , ye aapne aap file ni banata hai 
#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); 
        printf("%c", ch);
        // when all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
    }
        return 0;
}
