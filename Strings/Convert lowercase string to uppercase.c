#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world!";

    printf("The lower case string : ");
    puts(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("The upper case string : ");
    puts(str);
}