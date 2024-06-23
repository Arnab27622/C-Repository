/* Create a structure ‘date’ that contains three members namely date, month and year. Create 2 structure variables with different dates and now compare the two. If
the dates are equal then display message as "Equal" otherwise "Unequal". */
#include <stdio.h>
#include <stdbool.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date arr[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Day : ");
        scanf("%d", &arr[i].day);
        printf("Month : ");
        scanf("%d", &arr[i].month);
        printf("Year : ");
        scanf("%d", &arr[i].year);
        printf("\n");
    }

    bool flag = true;

    if (arr[0].day != arr[1].day)
        flag = false;
    if (arr[0].month != arr[1].month)
        flag = false;
    if (arr[0].year != arr[1].year)
        flag = false;

    if (flag == true)
    {
        printf("equal");
    }
    else
        printf("not equal");
    return 0;
}
