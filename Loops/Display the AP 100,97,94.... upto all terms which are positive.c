#include <stdio.h>
int main()
{
    int a = 100;
    for (int i = 100; i >= 0; i--)
    {
        if (a > 0)
            printf("%d,", a);
        a = a - 3;
    }
    return 0;
}