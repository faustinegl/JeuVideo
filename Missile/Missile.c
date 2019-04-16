//
// Created by Faustine on 16/04/2019.
//

#include "Missile.h"

void init_missiles(Missile missiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_MISSILES; i++) {
        missiles[i].vitesse = 10;
        missiles[i].actif = 0;
    }
}

void affiche_missiles(Missile missiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_MISSILES; i++) {
        if (missiles[i].actif) {
            al_draw_filled_ellipse(missiles[i].x, missiles[i].y, 3, 2, al_map_rgb(255, 255, 0));
        }
    }
}

void avance_missiles(Missile missiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_MISSILES; i++) {
        if (missiles[i].actif) {
            missiles[i].x += missiles[i].vitesse;
            if (missiles[i].x >= SCREEN_WIDTH) {
                missiles[i].actif = 0;
            }
        }
    }
}

void lancement_missile(Vaisseau *vaisseau, Missile missiles[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_MISSILES; i++) {
        if (!missiles[i].actif) {
            missiles[i].actif = 1;
            missiles[i].x = vaisseau->x + vaisseau->width;
            missiles[i].y = vaisseau->y + vaisseau->height / 2;
            break;
        }
    }
}

void collision_missile(Missile missiles[], Ennemi ennemis[], Vaisseau *vaisseau) {
    int i = 0, j = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        if (ennemis[i].actif) {
            for (j = 0; j < NB_MAX_MISSILES; j++) {
                if (missiles[j].actif &&
                    missiles[j].x > ennemis[i].x - ennemis[i].width &&
                    missiles[j].y > ennemis[i].y - ennemis[i].height &&
                    missiles[j].y < ennemis[i].y + ennemis[i].height) {
                    missiles[j].actif = 0;
                    ennemis[i].actif = 0;
                    vaisseau->score++;
                }
            }
        }
    }
}