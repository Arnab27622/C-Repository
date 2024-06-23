
#include <stdio.h>
int check(int arr[], int n)
{
    int temp;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        if (arr[i] != arr[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

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

    int p = check(arr, n);

    if (p)
    {
        printf("The array is Palindrome");
    }
    else
    {
        printf("The array is not Palindrome");
    }
    return 0;
}