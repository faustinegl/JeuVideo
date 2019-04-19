//
// Created by Faustine on 16/04/2019.
//

#include "Heros.h"

void init_heros(Heros *heros) {
    heros->x = 20;
    heros->y = SCREEN_HEIGHT / 2;
    heros->vitesse = 7;
    heros->width = 3;
    heros->height = 2;
    heros->vie = 3;
    heros->score = 0;
    heros->image = al_load_bitmap("../images/poney.png");
    if (!heros->image) {
        heros->image = al_create_bitmap(heros->width, heros->height);
        al_set_target_bitmap(heros->image);
        al_clear_to_color(NOIR);
        al_draw_filled_triangle(100, 100 , 0, heros->height, heros->width, heros->height / 2,
                                al_map_rgb(200, 200, 255));
    }
    else {
        heros->width = al_get_bitmap_width(heros->image);
        heros->height = al_get_bitmap_height(heros->image);
    }
}

void affiche_heros(Heros *heros) {
    al_draw_bitmap(heros->image, heros->x, heros->y, 0);
}

void monte(Heros *heros) {
    heros->y = (heros->y - heros->vitesse < 0) ? 0 : heros->y - heros->vitesse;
}

void descend(Heros *heros) {
    heros->y = (heros->y + heros->height + heros->vitesse > SCREEN_HEIGHT) ? SCREEN_HEIGHT -
                                                                                         heros->height :
                  heros->y + heros->vitesse;
}

void gauche(Heros *heros) {
    heros->x = (heros->x - heros->vitesse < 0) ? 0 : heros->x - heros->vitesse;
}

void droite(Heros *heros) {
    heros->x = (heros->x + heros->vitesse >= SCREEN_WIDTH / 3) ? SCREEN_WIDTH / 3 : heros->x +
                                                                                             heros->vitesse;
}

void collision_heros(Heros *heros, Ennemi *ennemis) {
    int i = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        if (ennemis[i].actif) {
            int x1 = ennemis[i].x ;
            int y1 = ennemis[i].y - ennemis[i].height;
            int x2 = ennemis[i].x + ennemis[i].width;
            int y2 = ennemis[i].y ;

            if ((heros->x + heros->width > x1 && heros->x < x2 ) &&
                    (heros->y > y1) && (heros->y < y2)) {
                heros->vie--;
                ennemis[i].actif = 0;
            }
        }
    }
}