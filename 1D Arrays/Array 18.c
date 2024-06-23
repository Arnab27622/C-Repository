/* You are given an array people where people[i] is the weight of the ith person,
   and an infinite number of boats where each boat can carry a maximum weight of limit.
   Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.
*/
#include <stdio.h>
#include <stdlib.h>

int find(int arr[], int size, int limit)
{
    int i = 0;
    int count = 0;
    while (i < size)
    {
        if (arr[i] + arr[i + 1] <= limit)
        {
            count++;
            i += 2;
        }
        else
        {
            count++;
            i++;
        }
    }

    return count;
}

int main()
{
    int n;
    printf("Enter number of people: ");
    scanf("%d", &n);

    int people[n];
    printf("Enter the weights of the people:\n");
    for (int i = 0; i < n; i++)
    {
        if (people[i] <= 0)
        {
            printf("Enter a valid weight.");
            exit(1);
        }

        scanf("%d", &people[i]);
    }

    int limit;
    printf("Enter the limit how much weight can a boat take: ");
    scanf("%d", &limit);

    int num = find(people, n, limit);

    printf("Number of boats required: %d\n", num);

    return 0;
}