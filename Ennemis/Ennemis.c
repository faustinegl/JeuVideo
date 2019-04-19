//
// Created by Faustine on 16/04/2019.
//

#include "Ennemis.h"

void init_ennemis(Ennemi ennemis[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        ennemis[i].vitesse = 2 + rand() % 3;
        ennemis[i].actif = 0;
        ennemis[i].width = 10 + rand() % 20;
        ennemis[i].height = ennemis[i].width * 2 / 3;
        ennemis->image = al_load_bitmap("../images/poney.png");
    }
        if (!ennemis->image) {
            ennemis->image = al_create_bitmap(ennemis->width, ennemis->height);
            al_set_target_bitmap(ennemis->image);
            al_clear_to_color(NOIR);
            al_draw_filled_rectangle(300,250,ennemis->width,ennemis->height,al_map_rgb(255,0,0));
        }
    else {
    ennemis->width=al_get_bitmap_width(ennemis->image);
    ennemis->height=al_get_bitmap_height(ennemis->image);
    }
}
void affiche_ennemis(Ennemi ennemis[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        if (ennemis[i].actif) {
            al_draw_bitmap(ennemis->image, ennemis[i].x,ennemis[i].y,0) ;
        }
    }
}

void mouvement_ennemis(Ennemi ennemis[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        if (ennemis[i].actif) {
            ennemis[i].x -= ennemis[i].vitesse;
            if (ennemis[i].x - ennemis[i].width < 0) {
                ennemis[i].actif = 0;
            }
        }
    }
}

void apparition_ennemis(Ennemi ennemis[]) {
    int i = 0;
    for (i = 0; i < NB_MAX_ENNEMIS; i++) {
        if (!ennemis[i].actif && rand() % 1000 < 10) {
            ennemis[i].x = SCREEN_WIDTH - ennemis[i].width;
            ennemis[i].y = ennemis[i].height + rand() % (SCREEN_HEIGHT - (ennemis[i].height * 2));
            ennemis[i].actif = 1;
        }
    }
}