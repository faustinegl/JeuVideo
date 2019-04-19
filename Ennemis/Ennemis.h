//
// Created by Faustine on 16/04/2019.
//



#ifndef ALLEGROJEUX_ENNEMI_H
#define ALLEGROJEUX_ENNEMI_H
#define NB_MAX_ENNEMIS 10
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "../constant.h"

typedef struct {
    int x, y;
    int vitesse;
    int width, height;
    int actif;
    ALLEGRO_BITMAP *image;
} Ennemi;

void init_ennemis(Ennemi ennemis[]);

void affiche_ennemis(Ennemi ennemis[]);

void mouvement_ennemis(Ennemi ennemis[]);

void apparition_ennemis(Ennemi ennemis[]);


#endif //JEUVIDEO_ENNEMIS_H
