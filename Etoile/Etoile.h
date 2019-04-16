//
// Created by Faustine on 16/04/2019.
//

#ifndef JEUVIDEO_ETOILE_H
#define JEUVIDEO_ETOILE_H
#define NB_MAX_ETOILES 250
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "../constant.h"

typedef struct {
    int x, y;
    int vitesse;
    int width, height;
    int actif;
} Etoile;

void init_etoiles(Etoile etoiles[]);

void affiche_etoiles(Etoile etoiles[]);

void mouvement_etoiles(Etoile etoiles[]);

void apparition_etoiles(Etoile etoiles[]);

#endif //JEUVIDEO_ETOILE_H
