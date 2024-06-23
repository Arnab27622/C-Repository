#include <stdio.h>

int check(int m, int n, int arr[][m])
{
    int maxCount = 0, index;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }

            if (maxCount < count)
            {
                maxCount = count;
                index = i;
            }
        }
    }

    return index;
}

int main()
{
    int m, n;
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elements of the matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int index = check(m, n, arr);

    printf("The index of the row having max number of 1's is %d", index);
    return 0;
}