#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void Index(const char str[], const char find)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == find)
        {
            printf("'%c' found at index %d\n", find, i);
        }
        i++;
    }
}

int main()
{
    char str[MAX_SIZE];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    char find;
    printf("Enter the character to search : ");
    find = getchar();

    Index(str, find);
    return 0;
}