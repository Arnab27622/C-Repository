#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    scanf("%d", &m);
    int a=1;
    for (int i = 1; i <= n; i++) {
        for(int j=1;j<=n;j++) {
            printf("%d",a);
        } a++;
        printf("\n");
    }
    return 0;
}