/* A record contains name of cricketer, his age, number
of test matches that he has played and the average runs that
he has scored in each test match. Create an array of structure
to hold records of 2 such cricketer and then write a program to
read these records */
#include <stdio.h>
#include <string.h>

typedef struct cricketer
{
    char firstname[50];
    char lastname[50];
    int age;
    int noOfMathches;
    float avg;
} crickerter;

int main()
{
    int n;
    printf("Enter number of cricketers : ");
    scanf("%d", &n);

    crickerter arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].firstname);
        scanf("%s", arr[i].lastname);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].noOfMathches);
        scanf("%f", &arr[i].avg);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Name : %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age : %d\n", arr[i].age);
        printf("Number of test matches : %d\n", arr[i].noOfMathches);
        printf("Average : %f\n\n", arr[i].avg);
    }
    return 0;
}