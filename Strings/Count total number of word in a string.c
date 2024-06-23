#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter the string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            count++;
        }
    }

    printf("Total number of words = %d", count);
    return 0;
}