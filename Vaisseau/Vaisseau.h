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
} Vaisseau;

void init_vaisseau(Vaisseau *vaisseau);

void affiche_vaisseau(Vaisseau *vaisseau);

void monte(Vaisseau *vaisseau);

void descend(Vaisseau *vaisseau);

void gauche(Vaisseau *vaisseau);

void droite(Vaisseau *vaisseau);

void collision_vaisseau(Vaisseau *vaisseau, Ennemi ennemis[]);

#endif //JEUVIDEO_VAISSEAU_H
