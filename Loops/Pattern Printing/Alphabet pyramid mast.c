#include <stdio.h>
/*
    ABCDEFGHI
    ABCD FGHI
    ABC   GHI
    AB     HI
    A       I
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n;
    int a = 1;
    int d = a + 64;
    char ch = (char)d;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}