#include <stdio.h>
int main()
{
    int d;
    printf("Enter the number of days : ");
    scanf("%d", &d);
    int years, weeks, days;
    years = d / 365;
    weeks = (d % 365) / 7;
    days = d - (years * 365) - (weeks * 7);
    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d", days);
    return 0;
}