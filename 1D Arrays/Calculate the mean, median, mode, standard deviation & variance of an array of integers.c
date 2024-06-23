// Calculate mean, median, mode, standard deviation & variance of an array of integers
#include <stdio.h>
#include <math.h>
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

    // Calculate Mean
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float mean = (float)sum / n;

    printf("\nThe Mean of elements of the array is %f\n", mean);

    // Calculate Mode
    float mode = (float)arr[0];
    for (int i = 0; i < n; i++)
    {
        if (mode < arr[i])
        {
            mode = arr[i];
        }
    }
    printf("The Mode of elements of the array is %f\n", mode);

    // Calculate Median
    float median = (2 * mean + mode) / 3;
    printf("The Median of elements of the array is %f\n", median);

    // Calculate Standard Deviation
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i] * arr[i];
    }

    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += brr[i];
    }

    float c = (float)sum2 / n;
    float sd = sqrt(c - (mean * mean));
    printf("The Standard Deviation of the elements of the array is %f\n", sd);

    // Calculate Variance
    float var = sd * sd;
    printf("The Variance of the elements of the array is %f", var);
    return 0;
}