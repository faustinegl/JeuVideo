//
// Created by Faustine on 16/04/2019.
//

#include "Etoile.h"

void init_etoiles(Etoile etoiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ETOILES; i++) {
        etoiles[i].vitesse = 1;
        etoiles[i].actif = 1;
        etoiles[i].x = etoiles[i].width + rand() % (SCREEN_WIDTH - (etoiles[i].width * 2));
        etoiles[i].y = etoiles[i].height + rand() % (SCREEN_HEIGHT - (etoiles[i].height * 2));
        etoiles[i].width = 1 + rand() % 2;
        etoiles[i].height = etoiles[i].width;
    }
}

void affiche_etoiles(Etoile etoiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ETOILES; i++) {
        if (etoiles[i].actif) {
            al_draw_filled_ellipse(etoiles[i].x, etoiles[i].y, etoiles[i].width, etoiles[i].height,
                                   al_map_rgb(200 + rand() % 56, 200 + rand() % 56, 200 + rand() % 56));
        }
    }
}

void mouvement_etoiles(Etoile etoiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ETOILES; i++) {
        if (etoiles[i].actif) {
            etoiles[i].x -= etoiles[i].vitesse;
            etoiles[i].y -= etoiles[i].vitesse * rand() % 1;
            if (etoiles[i].x - etoiles[i].width < 0) {
                etoiles[i].actif = 0;
            }
        }
    }
}

void apparition_etoiles(Etoile etoiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ETOILES; i++) {
        if (!etoiles[i].actif && rand() % 1000 < 2) {
            etoiles[i].x = SCREEN_WIDTH - etoiles[i].width;
            etoiles[i].y = etoiles[i].height + rand() % (SCREEN_HEIGHT - (etoiles[i].height * 2));
            etoiles[i].actif = 1;
        }
    }
}