//
// Created by Faustine on 16/04/2019.
//

#ifndef JEUVIDEO_MISSILE_H
#define JEUVIDEO_MISSILE_H
#define NB_MAX_MISSILES 12
#include <allegro5/allegro_primitives.h>
#include "../vaisseau/vaisseau.h"
#include "../constant.h"


typedef struct {
    int x, y;
    int vitesse;
    int actif;
} Missile;

void init_missiles(Missile missiles[]);

void affiche_missiles(Missile missiles[]);

void avance_missiles(Missile missiles[]);

void lancement_missile(Vaisseau *vaisseau, Missile missiles[]);

void collision_missile(Missile missiles[], Ennemi ennemis[], Vaisseau *vaisseau);

#endif //JEUVIDEO_MISSILE_H
