// Print all index of a number if it is present in the array
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
    
    int num;
    printf("Enter the number we want to check : ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            printf("%d is present in the array and its index is %d\n", num, i);
        }
        else
        {
            printf("%d is not present in the array", num);
            break;
        }
    }
    return 0;
}