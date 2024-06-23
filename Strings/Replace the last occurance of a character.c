#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void replace(char str[], char oldchar, char newchar)
{
    int i = 0;
    int index;
    while (str[i] != '\0')
    {
        if (str[i] == oldchar)
        {
            index = i;
        }
        i++;
    }
    str[index] = newchar;
}

int main()
{
    char str[MAX_SIZE];
    char oldchar, newchar;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to replace : ");
    oldchar = getchar();

    // Used to skip extra ENTER character
    getchar();
    
    printf("Enter character to replace '%c' with : ", oldchar);
    newchar = getchar();

    printf("Before replacing the string : %s", str);

    replace(str, oldchar, newchar);

    printf("After replacing '%c' with '%c' the string : %s", oldchar, newchar, str);

    return 0;
}