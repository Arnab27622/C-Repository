#include <stdio.h>
/*
     A
    ABC
   ABCDE
  ABCDEFG
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= nst; k++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        nst += 2;
        nsp--;
        printf("\n");
    }
    return 0;
}