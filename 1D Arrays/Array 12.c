// Print first/last index of a number if it is present multiple times in the array
#include <stdio.h>
#include <stdbool.h>
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

    int num, index;
    bool flag = false;
    printf("Enter the number we want to check : ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) // to print the last index just run loop in the opposite direction
    {
        if (num == arr[i])
        {
            flag = true;
            index = i;
            break;
        }
    }
    if (flag == true)
    {
        printf("%d is present in the array and its index is %d", num, index);
    }
    else
    {
        printf("%d is not present in the array", num);
    }
    return 0;
}