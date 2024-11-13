#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;
    typedef struct legendrypokemon
    {
        pokemon normal;
        char ability[10];
    }legendrypokemon;
    legendrypokemon mewtwo;
    strcpy (mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"mewtwo");
    mewtwo.normal.speed=180;
    mewtwo.normal.tier='S';
    typedef struct godpokemon
    {
        legendrypokemon legend;
        int specialattack;
    }godpokemon;
    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability,"turn anyone to stonr");
    arceus.legend.normal.attack=500;
    return 0;
}