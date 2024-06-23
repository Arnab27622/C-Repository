#include <stdio.h>
#include <string.h>

void reverseWords(char str[])
{
    int length = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Reverse each word individually
    int start = 0;
    for (int i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int end = i - 1;
            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
