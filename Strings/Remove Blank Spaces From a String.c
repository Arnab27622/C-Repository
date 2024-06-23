#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void Remove(char str[]);

int main()
{
    char str[MAX_SIZE];
    printf("Enter the String:\n");
    fgets(str, sizeof(str), stdin);

    Remove(str);

    printf("String without blank spaces:\n");
    puts(str);
    return 0;
}

void Remove(char str[])
{
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}