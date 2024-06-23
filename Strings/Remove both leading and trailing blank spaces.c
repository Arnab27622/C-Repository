#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

void Remove(char str[])
{
    int start, end;
    int length = strlen(str);

    // Find the index of the first non-space character from the beginning
    for (start = 0; start < length && isspace((unsigned char)str[start]); start++)
    {
        // Continue moving index until a non-space character is found
    }

    // Find the index of the last non-space character from the end
    for (end = length - 1; end >= 0 && isspace((unsigned char)str[end]); end--)
    {
        // Find the index of the last non-space character from the end
    }

    // Shift the remaining characters to the beginning of the string
    for (int i = 0; i <= end - start; i++)
    {
        str[i] = str[start + i];
    }

    // Null-terminate the trimmed string

    str[end - start + 1] = '\0';
}

int main()
{
    char str[MAX_SIZE];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    printf("Original string : \"%s\"\n", str);

    Remove(str);

    printf("Result string : \"%s\"\n", str);
    return 0;
}