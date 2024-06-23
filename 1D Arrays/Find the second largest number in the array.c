#include <stdio.h>
#include <limits.h>
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

    int max = INT_MIN;
    int sMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && sMax < arr[i])
            sMax = arr[i];
    }
    printf("The max term is %d\n", max);
    printf("The second max term is %d", sMax);
    return 0;
}