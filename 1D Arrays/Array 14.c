// Write a programme to find a duplicate element from an array
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
    int index;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                index = arr[i];
                flag = true;
                break;
            }
        }
    }
    if (flag == true)
    {
        printf("The duplicate number is %d", index);
    }
    else
    {
        printf("There is no duplicate element");
    }
    return 0;
}