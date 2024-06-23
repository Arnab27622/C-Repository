#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);
    int count1 = 0, count2 = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char lowercase_vowel = (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u');
        char uppercase_vowel = (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U');

        if (uppercase_vowel || lowercase_vowel)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    printf("Number of vowels : %d\n", count1);
    printf("Number of consonents : %d\n", count2);
    return 0;
}