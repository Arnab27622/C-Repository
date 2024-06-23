#include <stdio.h>
int main()
{
    int nou, tb, tbwa;
    printf("Enter the number of units\n");
    scanf("%d", &nou);
    if (nou < 0)
    {
        printf("Total Bill= 0");
    }
    else if (nou >= 0 && nou <= 50)
    {
        tb = nou * (0.5);
    }
    else if (nou > 50 && nou <= 150)
    {
        tb = (50 * 0.5) + (nou - 50) * 0.75;
    }
    else if (nou > 150 && nou <= 250)
    {
        tb = (50 * 0.5) + (100 * 0.75) + (nou - 150) * 1.20;
    }
    else if (nou > 250)
    {
        tb = (50 * 0.5) + (100 * 0.75) + (100 * 1.20) + (nou - 250) * 1.50;
    }
    tbwa = tb + (tb * 0.2);
    printf("total bill is : %d", tbwa);
    return 0;
}
