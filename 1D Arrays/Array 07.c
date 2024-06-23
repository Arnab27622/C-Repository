// Write a programme to copy the contents of one array into another array in reverse order
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

    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[(n - 1) - i];
    }

    printf("The result array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", brr[i]);
    }
    return 0;
}