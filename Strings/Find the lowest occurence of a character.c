#include <stdio.h>
#define MAX_SIZE 100
#define MAX_CHARS 255

int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS];
    int i = 0;
    int ascii;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    /* Initialize frequency of all characters to 0 */
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

    int min = 0;
    for (i = 0; i < MAX_CHARS; i++)
    {
        if (freq[i] != 0)
        {
            if (freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }

    printf("Minimum occurring character is '%c', it occurs %d.", min, freq[min]);

    return 0;
}