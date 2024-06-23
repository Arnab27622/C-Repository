#include <stdio.h>
#include <windows.h>
/*
    1
    01
    101
    0101
*/
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            a = 0;
        else
            a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            if (a == 0)
                a = 1;
            else
                a = 0;
        }
        Sleep(1000);
        printf("\n");
    }
    return 0;
}