#include <stdio.h>

int selfDividing(int n)
{
    int ld;
    int num = n;
    while (num > 0)
    {
        ld = num % 10;
        if (n % ld != 0)
        {
            return 0;
        }
        num /= 10;
    }

    return 1;
}

int main()
{

    int left, right;
    printf("Enter the left range to check: ");
    scanf("%d", &left);
    printf("Enter the right range to check: ");
    scanf("%d", &right);

    printf("The self Dividing Numbers in range %d to %d are:\n", left, right);
    for (int i = left; i <= right; i++)
    {
        if (selfDividing(i))
        {
            printf("%d,", i);
        }
    }

    return 0;
}