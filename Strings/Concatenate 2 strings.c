#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Arnab";
    char str2[] = " Dey";

    printf("The concatenated string : ");
    puts(strcat(str1, str2));
    return 0;
}