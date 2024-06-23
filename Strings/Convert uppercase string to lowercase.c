#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ARNAB DEY";
    printf("The uppercase string : ");
    puts(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("The lowercase string : ");
    puts(str);

    return 0;
}