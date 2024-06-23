#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Arnab Dey";
    char str2[40];

    strcpy(str2, str);
    printf("The copied string : ");
    puts(str2);
    return 0;
}