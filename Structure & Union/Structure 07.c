// Create a structure ‘person’ having attributes as age and weight. Access its structure variables using pointers.
#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    char name[50];
    int attack;
    int speed;
} pokemon;

void change(pokemon *p)
{
    // strcpy((*p).name, "Raichu");
    // (*p).attack = 90;
    // (*p).speed = 100;

    // (*p).something == p -> something
    strcpy(p->name, "Raichu"); // We can use any of these two but the 2nd is better
    p->attack = 90;
    p->speed = 100;
}

int main()
{
    pokemon p = {"Pikachu", 60, 80}; // We can also intialise structure variables like this. But we have to maintain order.
    // strcpy(p.name, "Pikachu");
    // p.attack = 60;
    // p.speed = 80;

    printf("%s\n", p.name);
    printf("Attack : %d\n", p.attack);
    printf("Speed : %d\n\n", p.speed);

    change(&p);

    printf("%s\n", p.name);
    printf("Attack : %d\n", p.attack);
    printf("Speed : %d\n", p.speed);
    return 0;
}