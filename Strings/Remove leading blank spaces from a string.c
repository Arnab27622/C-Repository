#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

void trim(char str[])
{
    int i, j;
    int n = strlen(str);

    // Find the index of the first non-space character
    for (i = 0; i < n && isspace((unsigned char)str[i]); i++) // 'isspace' is used to check whether a given character is a white-space character.it uses unsigned char arguments
    {
        // Continue moving index until a non-space character is found
    }

    // Shift the remaining characters to the beginning of the string
    for (j = 0; i < n; ++i, ++j)
    {
        str[j] = str[i];
    }

    // Null-terminate the trimmed string
    str[j] = '\0';
}

int main()
{
    char str[MAX_SIZE];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    printf("Original string: \"%s\"\n", str);

    trim(str);

    printf("Trimmed string: \"%s\"\n", str);

    return 0;
}
