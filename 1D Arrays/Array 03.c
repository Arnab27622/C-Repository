// Count the number of elements in given array greater than a given number x and print them
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

    printf("The values which are greater than x is/are : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            printf("%d,", arr[i]);
            count++;
        }
    }
    printf("\nThe number of elements greater than x is/are : %d", count);
    return 0;
}