#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++) {
        printf("%f\t",a);
        a=a/2;
    } return 0;
}