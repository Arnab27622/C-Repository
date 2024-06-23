#include <stdio.h>
#define MAX_SIZE 100 
#define MAX_CHARS 256
int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0;
    int ascii;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    /* Initializes frequency of all characters to 0 */
    for (i = 0; i < MAX_CHARS; i++)
    {
        freq[i] = 0;
    }

    /* Finds frequency of each characters */
    i = 0;
    while (str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;
        i++;
    }

    /* Finds maximum frequency */
    int max = 0;
    for (i = 0; i < MAX_CHARS; i++)
    {
        if (freq[i] > freq[max])
            max = i;
    }

    printf("Maximum occurring character is '%c' it occurs %d times.", max, freq[max]);

    return 0;
}