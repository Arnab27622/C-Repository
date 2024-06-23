#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    // printf("Reversed string (Using library function): ");
    // puts(strrev(inputString));

    reverseString(inputString);

    printf("Reversed string (Using loop): ");
    puts(inputString);

    return 0;
}
