#include <stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = (-n / 2); /*if n is even then we will get pairs like (1-2)+(3-4)+(5-6)+... where result of every box is -1 and pair number is n/2 so if n is even then sum=(-n/2)*/
        else
            sum = (-(n - 1) / 2) + n; /*if n is odd then we will get pairs like (1-2)+(3-4)+(5-6)+... where result of every box is -1 and an extra last odd digit which is equal to n.
                      now pair number is n/2 so for the pairs sum is -(n-1)/2 . Here n-1 is taken as we are deducating last value. So total sum is (-(n-1)/2)+n*/
    }
    printf("The sum is %d", sum);
    return 0;
}