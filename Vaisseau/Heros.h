//
// Created by Faustine on 16/04/2019.
//

#ifndef ALLEGROJEUX_VAISSEAU_H
#define ALLEGROJEUX_VAISSEAU_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include "../constant.h"
#include "../Ennemis/ennemis.h"

typedef struct {
    int x, y;
    int vitesse;
    int width, height;
    int vie;
    int score;
    ALLEGRO_BITMAP *image;
} Heros;

void init_heros(Heros *vaisseau);

void affiche_heros(Heros *heros);

void monte(Heros *heros);

void descend(Heros *heros);

void gauche(Heros *heros);

void droite(Heros *heros);

void collision_heros(Heros *heros, Ennemi *ennemis);

#endif //JEUVIDEO_VAISSEAU_H
