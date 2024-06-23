#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The alphabet is in uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The alphabet is in lowercase");
    }
    else
    {
        printf("The character is not an alphabet");
    }
    return 0;
}