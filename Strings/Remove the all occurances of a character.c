#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeFirst(char str[], char Remove)
{
    int i, j;
    int len = strlen(str);

    for (i = 0; i < len; i++)
    {
        /* If the character to remove is found then shift all characters to one
           place left and decrement the length of string by 1. */

        if (str[i] == Remove)
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }

            len--;

            // If a character is removed then make sure i doesn't increments
            i--;
        }
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
