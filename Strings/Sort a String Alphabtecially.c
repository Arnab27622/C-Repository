#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void sortAlphabetically(char str[]);

int main()
{
    char str[MAX_SIZE];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    sortAlphabetically(str);

    printf("The sorted String is: %s", str);

    return 0;
}

void sortAlphabetically(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (strcmp(&str[j], &str[j + 1]) > 0)
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}