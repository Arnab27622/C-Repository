// Create a structure type ‘book’ with name, price and number of pages as its attributes
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

    strcpy(a.name, "Vagabond");
    a.price = 1000.50;
    a.noOfPages = 572;

    strcpy(b.name, "Gojo Satoru");
    b.price = 950.50;
    b.noOfPages = 650;

    printf("Info. on books:\n");
    printf("1. Name : %s\n", a.name);
    printf("\tPrice : %f\n", a.price);
    printf("\tNumber of pages : %d\n\n", a.noOfPages);

    printf("2. Name : %s\n", b.name);
    printf("\tPrice : %f\n", b.price);
    printf("\tNumber of pages : %d\n\n", b.noOfPages);
    return 0;
}