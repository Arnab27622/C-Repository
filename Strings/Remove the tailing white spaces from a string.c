#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

void Remove(char str[])
{
    int i = 0;
    int length = strlen(str);
    for (i = length - 1; i >= 0 && isspace((unsigned char)str[i]); i--)
    {
    }

    str[i + 1] = '\0';
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