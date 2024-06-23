#include <stdio.h>
#include <string.h>

typedef struct book
{
    char name[50];
    float price;
    int noOfPages;
} book;

int main()
{
    book a, b;

    printf("Enter the first book's name : ");
    scanf("%s", a.name);
    printf("Enter the first book's price : ");
    scanf("%f", &a.price);
    printf("Enter the first book's noOfPPages : ");
    scanf("%d", &a.noOfPages);

    printf("Enter the second book's name : ");
    scanf("%s", b.name);
    printf("Enter the second book's price : ");
    scanf("%f", &b.price);
    printf("Enter the second book's noOfPPages : ");
    scanf("%d", &b.noOfPages);

    printf("Info. on books:\n");
    printf("1. Name : %s\n", a.name);
    printf("\tPrice : %f\n", a.price);
    printf("\tNumber of pages : %d\n\n", a.noOfPages);

    printf("2. Name : %s\n", b.name);
    printf("\tPrice : %f\n", b.price);
    printf("\tNumber of pages : %d\n\n", b.noOfPages);
    return 0;
}