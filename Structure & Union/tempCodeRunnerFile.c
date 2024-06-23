// Nested Structure
#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    char name[50];
    int attack;
    int speed;
} pokemon;

typedef struct legendarypokemon
{
    pokemon x;
    int special;
} legend;

typedef struct godpokemon
{
    legend y;
    int life;
} god;

int main()
{
    pokemon p;
    strcpy(p.name, "Pikachu");
    p.attack = 50;
    p.speed = 80;

    printf("%s\n", p.name);
    printf("Attack : %d\n", p.attack);
    printf("Speed : %d\n\n", p.speed);

    legend a;
    strcpy(a.x.name, "Palkia");
    a.x.attack = 500;
    a.x.speed = 800;
    a.special = 900;

    printf("%s\n", a.x.name);
    printf("Attack : %d\n", a.x.attack);
    printf("Speed : %d\n", a.x.speed);
    printf("Special : %d\n\n", a.special);

    god b;
    strcpy(b.y.x.name, "Archeus");
    b.y.x.attack = 5000;
    b.y.x.speed = 8000;
    b.y.special = 9000;
    b.life = 1000;

    printf("%s\n", b.y.x.name);
    printf("Attack : %d\n", b.y.x.attack);
    printf("Speed : %d\n", b.y.x.speed);
    printf("Special : %d\n", b.y.special);
    printf("Life : %d\n\n", b.life);
    return 0;
}
