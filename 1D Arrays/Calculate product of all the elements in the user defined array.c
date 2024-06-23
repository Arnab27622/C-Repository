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
    
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    printf("The sum of all elememts is %d", product);
    return 0;
}