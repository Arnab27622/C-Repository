#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int Find(const char str[], const char find)
{
    int i = 0;
    int index;
    while (str[i] != '\0')
    {
        if (str[i] == find)
        {
            index = i;
        }
        i++;
    }
    return index;
}

int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    char find;
    printf("Enter the character you wanna search : ");
    find = getchar();

    int index = Find(str, find);

    if (index == 0)
    {
        printf("%c not found", find);
    }
    else
    {
        printf("%c found at the index %d", find, index);
    }
    return 0;
}