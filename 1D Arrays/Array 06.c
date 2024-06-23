// Find total number of triplets in an array whose sum is equal to the given number x
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x, count = 0;
    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("The triplets whose sum is equal to x : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == x)
                {
                    printf("(%d,%d,%d)", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\nThe number of pairs equal to x is : %d", count);
    return 0;
}