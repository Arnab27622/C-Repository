// An array containing elements from 1 to n, one element is missing in the range. Find the missing element.
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

    int rSum = 0, sum = 0; // if one element is missing then, (sum of all numbers in that range) - (sum of all present elements of array) = The missing element
    int m = n + 1;         // As one element is missing so total numbers of the range = (current size of array) + 1
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    rSum = (m * (m + 1)) / 2; // as we know that sum of first n natural numbers is (n*(n-1))/2
    printf("The missing number is %d", rSum - sum);
    return 0;
}