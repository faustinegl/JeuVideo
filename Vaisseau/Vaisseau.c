//
// Created by Faustine on 16/04/2019.
//

#include "Vaisseau.h"

void init_vaisseau(Vaisseau *vaisseau) {
    vaisseau->x = 20;
    vaisseau->y = SCREEN_HEIGHT / 2;
    vaisseau->vitesse = 7;
    vaisseau->width = 30;
    vaisseau->height = 20;
    vaisseau->vie = 3;
    vaisseau->score = 0;
    vaisseau->image = al_load_bitmap("../images/poney.png");
    if (!vaisseau->image) {
        vaisseau->image = al_create_bitmap(vaisseau->width, vaisseau->height);
        al_set_target_bitmap(vaisseau->image);
        al_clear_to_color(NOIR);
        al_draw_filled_triangle(0, 0, 0, vaisseau->height, vaisseau->width, vaisseau->height / 2,
                                al_map_rgb(200, 200, 255));
    }
    else {
        vaisseau->width = al_get_bitmap_width(vaisseau->image);
        vaisseau->height = al_get_bitmap_height(vaisseau->image);
    }
}

void affiche_vaisseau(Vaisseau *vaisseau) {
    al_draw_bitmap(vaisseau->image, vaisseau->x, vaisseau->y, 0);
}

void monte(Vaisseau *vaisseau) {
    vaisseau->y = (vaisseau->y - vaisseau->vitesse < 0) ? 0 : vaisseau->y - vaisseau->vitesse;
}

void descend(Vaisseau *vaisseau) {
    vaisseau->y = (vaisseau->y + vaisseau->height + vaisseau->vitesse > SCREEN_HEIGHT) ? SCREEN_HEIGHT -
                                                                                         vaisseau->height :
                  vaisseau->y + vaisseau->vitesse;
}

void gauche(Vaisseau *vaisseau) {
    vaisseau->x = (vaisseau->x - vaisseau->vitesse < 0) ? 0 : vaisseau->x - vaisseau->vitesse;
}

void droite(Vaisseau *vaisseau) {
    vaisseau->x = (vaisseau->x + vaisseau->vitesse >= SCREEN_WIDTH / 3) ? SCREEN_WIDTH / 3 : vaisseau->x +
                                                                                             vaisseau->vitesse;
}

void collision_vaisseau(Vaisseau *vaisseau, Ennemi ennemis[]) {
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