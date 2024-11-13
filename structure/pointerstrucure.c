#include<Stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.speed=100;
    pikachu.attack=70;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    pokemon*x=&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);
    printf("%p",x);
    return 0;
}