// Find difference between the sum of elements at even indices to the sum of elements at odd indices
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

    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    printf("The Difference is %d", sumEven - sumOdd);
    return 0;
}