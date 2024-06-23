#include<stdio.h>
int main()
{
    long int n;
    printf("Emter a number\n");
    scanf("%ld",&n);
    long int count=0;
    while (n>0)
    {
        n=n/10;
        count++;
    } 
    printf("The number of digit is %ld",count);
    return 0;
}