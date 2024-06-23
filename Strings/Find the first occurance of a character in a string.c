#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int indexOf(const char str[], const char Find) /* const char is used to declare read-only strings or pointers to constant characters in C, providing a level of
                                                 safety by preventing unintended modifications to the data.*/
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == Find)
        {
            return i;
        }
        i++;
    }
    return 0;
}

int main()
{
    char str[MAX_SIZE];
    char Find;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to be searched: ");
    Find = getchar(); // the 'getchar()' function is used to read a single character from the standard input stream (usually the keyboard)

    int index = indexOf(str, Find);

    if (index == 0)
        printf("'%c' not found.", Find);
    else
        printf("'%c' is found at index %d.", Find, index);

    return 0;
}
