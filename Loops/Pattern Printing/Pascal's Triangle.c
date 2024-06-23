#include <stdio.h>
int main()
{
    int n;
    printf("Enter numner of rows : ");
    scanf("%d", &n);
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        // inner loop 1 for leading white spaces
        for (int j = 0; j < nsp; j++)
        {
            printf(" ");
        }
        int C = 1; // coefficient
        // inner loop 2 for printing numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        nsp--;
        printf("\n");
    }
    return 0;
}