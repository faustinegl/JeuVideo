//
// Created by Faustine on 16/04/2019.
//

#include "Vaisseau.h"

void init_vaisseau(Heros *heros) {
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
        al_draw_filled_triangle(0, 0, 0, heros->height, heros->width, heros->height / 2,
                                al_map_rgb(200, 200, 255));
    }
    else {
        heros->width = al_get_bitmap_width(heros->image);
        heros->height = al_get_bitmap_height(heros->image);
    }
}

void affiche_vaisseau(Heros *vaisseau) {
    al_draw_bitmap(vaisseau->image, vaisseau->x, vaisseau->y, 0);
}

void monte(Heros *vaisseau) {
    vaisseau->y = (vaisseau->y - vaisseau->vitesse < 0) ? 0 : vaisseau->y - vaisseau->vitesse;
}

void descend(Heros *vaisseau) {
    vaisseau->y = (vaisseau->y + vaisseau->height + vaisseau->vitesse > SCREEN_HEIGHT) ? SCREEN_HEIGHT -
                                                                                         vaisseau->height :
                  vaisseau->y + vaisseau->vitesse;
}

void gauche(Heros *vaisseau) {
    vaisseau->x = (vaisseau->x - vaisseau->vitesse < 0) ? 0 : vaisseau->x - vaisseau->vitesse;
}

void droite(Heros *vaisseau) {
    vaisseau->x = (vaisseau->x + vaisseau->vitesse >= SCREEN_WIDTH / 3) ? SCREEN_WIDTH / 3 : vaisseau->x +
                                                                                             vaisseau->vitesse;
}

void collision_vaisseau(Heros *vaisseau, Ennemi ennemis[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        if (ennemis[i].actif) {
            int x1 = ennemis[i].x - ennemis[i].width;
            int y1 = ennemis[i].y - ennemis[i].height;
            int x2 = ennemis[i].x;
            int y2 = ennemis[i].y + ennemis[i].height;

            if (vaisseau->x + vaisseau->width > x1 && vaisseau->x < x2 &&
                vaisseau->y + vaisseau->height > y1 && vaisseau->y < y2) {
                vaisseau->vie--;
                ennemis[i].actif = 0;
            }
        }
    }
}