#include <stdio.h>
void swap(int arr[])
{
    int temp = arr[3];
    arr[3] = arr[1];
    arr[1] = temp;
    return;
}
int main()
{
    int arr[4] = {2, 7, 5, 1};
    printf("Before swapping %d and %d\n", arr[3], arr[1]);
    swap(arr);
    printf("After swapping %d and %d", arr[3], arr[1]);
    return 0;
}