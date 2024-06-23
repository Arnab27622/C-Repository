#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeFirst(char str[], const char Remove)
{
    int i = 0;
    int len = strlen(str);

    /* Run loop till the first occurrence of the character is not found */
    while (i < len && str[i] != Remove)
        i++;

    /* Shift all characters right to the position found above, to one place left */
    while (i < len)
    {
        str[i] = str[i + 1];
        i++;
    }
}

int main()
{
    char str[MAX_SIZE];
    char Remove;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to remove from string: ");
    Remove = getchar();

    removeFirst(str, Remove);

    printf("String after removing first '%c' : %s", Remove, str);

    return 0;
}
