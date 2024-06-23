#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int a=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d",a);
            if(a==0) {
                a=1;
            } else {
                a=0;
            }
        } printf("\n");
    } return 0;
}