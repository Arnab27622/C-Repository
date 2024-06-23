// It is assumed a user will enter arrays in ascending order
#include <stdio.h>
void merge(int[], int, int[], int, int[]);
int main()
{
    int m, n;
    printf("Enter the no. of elements of the first array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no. of elements of the second array: ");
    scanf("%d", &m);

    int brr[m];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &brr[i]);
    }

    int sorted[m + n];
    merge(arr, n, brr, m, sorted);

    printf("Sorted array:\n");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", sorted[i]);
    }
    return 0;
}
void merge(int arr[], int n, int brr[], int m, int sorted[])
{
    int i, j, k;
    j = k = 0;
    for (i = 0; i < m + n;)
    {
        if (j < n && k < m)
        {
            if (arr[j] < brr[k])
            {
                sorted[i] = arr[j];
                j++;
            }
            else
            {
                sorted[i] = brr[k];
                k++;
            }
            i++;
        }
        else if (j == n)
        {
            for (; i < m + n;)
            {
                sorted[i] = brr[k];
                k++;
                i++;
            }
        }
        else
        {
            for (; i < m + n;)
            {
                sorted[i] = arr[j];
                j++;
                i++;
            }
        }
    }
}