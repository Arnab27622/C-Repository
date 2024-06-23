/* Input an array of n numbers and store the even numbers into an array even[] and odd numbers into an
array odd[]. Also display the count of even and odd numbers found.
 */
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

    int count1 = 0, count2 = 0;
    int even[count1];
    int odd[count2];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[count1] = arr[i];
            count1++;
        }
        else
        {
            odd[count2] = arr[i];
            count2++;
        }
    }

    printf("The number of even elements is %d\n", count1);
    printf("The result Even array is : ");
    for (int i = 0; i < count1; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("The number of even elements is %d\n", count1);
    printf("The result Odd array is : ");
    for (int i = 0; i < count2; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}