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

void init_vaisseau(Heros *vaisseau);

void affiche_vaisseau(Heros *vaisseau);

void monte(Heros *vaisseau);

void descend(Heros *vaisseau);

void gauche(Heros *vaisseau);

void droite(Heros *vaisseau);

void collision_vaisseau(Heros *vaisseau, Ennemi ennemis[]);

#endif //JEUVIDEO_VAISSEAU_H
