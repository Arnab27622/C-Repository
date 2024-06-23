#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[])
{
    int length = strlen(str);
    int index = 0;

    for (int i = 0; i < length; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }

        if (j == i)
        {
            str[index++] = str[i];
        }
    }

    str[index] = '\0';
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    removeDuplicates(inputString);

    printf("String after removing duplicates: %s\n", inputString);

    return 0;
}