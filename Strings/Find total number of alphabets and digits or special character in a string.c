#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);

    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count1++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }

    printf("Number of alphabets : %d\n", count1);
    printf("Number of digits : %d\n", count2);
    printf("Number of special characters : %d\n", count3);

    return 0;
}