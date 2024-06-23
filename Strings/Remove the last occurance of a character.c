#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeFirst(char str[], const char Remove)
{
    int i, lastPosition;
    int len = strlen(str);

    // Assume that character does not exist in string
    lastPosition = -1;
    i = 0;

    while (i < len)
    {
        if (str[i] == Remove)
        {
            lastPosition = i;
        }

        i++;
    }

    // If character exists in string
    if (lastPosition != -1)
    {
        i = lastPosition;

        // Shift all characters right to the position found above to left

        while (i < len)
        {
            str[i] = str[i + 1];
            i++;
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
