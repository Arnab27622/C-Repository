#include <stdio.h>

long convert(int deciNo)
{
    static long biNo, ld, factor = 1;

    if (deciNo != 0)
    {
        ld = deciNo % 2;
        biNo = biNo + ld * factor;
        factor = factor * 10;
        convert(deciNo / 2);
    }
    return biNo;
}
int main()
{
    long biNo;
    int deciNo;
    printf(" Input any decimal number : ");
    scanf("%d", &deciNo);
    biNo = convert(deciNo);
    printf(" The Binary value of Decimal no. %d is : %ld", deciNo, biNo);
    return 0;
}
