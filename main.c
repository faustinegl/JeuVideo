#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include "Vaisseau/Heros.h"
#include "Missile/missile.h"
#include "Ennemis/ennemis.h"
#include "Etoile/etoile.h"
#include "constant.h"

enum KEYS {
    UP, DOWN, LEFT, RIGHT, KEY_MAX
};

void erreur(const char *txt) {
    printf("ERREUR : %s", txt);
    exit(EXIT_FAILURE);
}

void affiche_infos(Heros vaisseau, ALLEGRO_FONT *font, ALLEGRO_FONT *fontBig) {
    if (vaisseau.vie <= 0) {
        al_draw_textf(fontBig, al_map_rgb(255, 255, 0), SCREEN_WIDTH / 2,
                      SCREEN_HEIGHT / 2 - al_get_font_ascent(fontBig), ALLEGRO_ALIGN_CENTER, "Game Over");
        al_draw_textf(font, al_map_rgb(255, 255, 0), SCREEN_WIDTH / 2,
                      SCREEN_HEIGHT / 2 + al_get_font_ascent(fontBig), ALLEGRO_ALIGN_CENTER, "Score : %d",
                      vaisseau.score);
    } else {
        al_draw_textf(font, al_map_rgb(255, 255, 0), 20, 20, 0,
                      vaisseau.vie > 1 ? "%d Vies  -  Score : %d" : "%d Vie   -  Score : %d", vaisseau.vie,
                      vaisseau.score);
    }
}

int main() {
    int fin = 0, pause = 0, gameOver = 0, dessin = 0, waitInMilliseconds = -1;
    int key[KEY_MAX] = {0};

    ALLEGRO_DISPLAY *display;
    ALLEGRO_EVENT_QUEUE *queue;
    ALLEGRO_TIMER *timer;
    ALLEGRO_FONT *fontBangers60;
    ALLEGRO_FONT *fontBangers160;
    ALLEGRO_BITMAP *fond;

    Heros heros;
    Missile missiles[NB_MAX_MISSILES];
    Ennemi ennemis[NB_MAX_ENNEMIS];


    if (!al_init()) {
        erreur("Initialisation Allegro");
    }

    if (!al_install_keyboard()) {
        erreur("Installation clavier");
    }

    if (!al_init_primitives_addon()) {
        erreur("Initialisation primitives de dessin");
    }

    if (!al_init_font_addon()) {
        erreur("Initialisation polices");
    }

    if (!al_init_ttf_addon()) {
        erreur("Initialisation polices TTF");
    }

    if (!al_init_image_addon()) {
        erreur("Initialisation images");
    }

    display = al_create_display(SCREEN_WIDTH, SCREEN_HEIGHT);

    int x, y, tx, ty;
    int pas;

    fond = al_load_bitmap("../images/fond 1.jpg");
    if (!fond)
        erreur("al_load_bitmap()");

    tx = al_get_bitmap_width(fond);
    ty = al_get_bitmap_height(fond);


    x = y = 0;
    pas = 5;

    al_get_keyboard_state(&key);


    al_set_window_title(display, "Combat spacial");

    fontBangers60 = al_load_ttf_font("../fonts/bangers/bangers-Regular.ttf", 60, 0);
    fontBangers160 = al_load_ttf_font("../fonts/bangers/bangers-Regular.ttf", 160, 0);
    if (!fontBangers60 || !fontBangers160) {
            erreur("Chargement de la police bangers");
        }

    queue = al_create_event_queue();
    if (!queue) {
            erreur("Création de l'event queue");
        }

    timer = al_create_timer(1.0 / 60);
    if (!timer) {
            erreur("Création du timer");
        }


    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_timer_event_source(timer));

    init_heros(&heros);
    al_set_target_backbuffer(display);
    init_missiles(missiles);
    init_ennemis(ennemis);


    al_start_timer(timer);

    do {
        ALLEGRO_EVENT event = {0};

            al_wait_for_event(queue, &event);

            if (al_key_down(&key, ALLEGRO_KEY_LEFT))

                x = (x - pas < 0) ? 0 : x - pas;

            if (al_key_down(&key, ALLEGRO_KEY_RIGHT))
                x = (x + pas > tx - SCREEN_WIDTH) ? tx - SCREEN_WIDTH : x + pas;

            if (al_key_down(&key, ALLEGRO_KEY_UP))
                y = (y - pas < 0) ? 0 : y - pas;

            if (al_key_down(&key, ALLEGRO_KEY_DOWN))
                y = (y + pas > ty - SCREEN_HEIGHT) ? ty - SCREEN_HEIGHT : y + pas;


            if (!display) {
                erreur("al_create_display()");
                return display;
            }
            if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
                fin = 1;
            } else if (event.type == ALLEGRO_EVENT_KEY_DOWN && !pause && waitInMilliseconds == -1) {
                switch (event.keyboard.keycode) {
                    case ALLEGRO_KEY_UP:
                    case ALLEGRO_KEY_W: // Z
                        key[UP] = 1;
                        break;
                    case ALLEGRO_KEY_DOWN:
                    case ALLEGRO_KEY_S:
                        key[DOWN] = 1;
                        break;
                    case ALLEGRO_KEY_LEFT:
                    case ALLEGRO_KEY_A: // Q
                        key[LEFT] = 1;
                        break;
                    case ALLEGRO_KEY_RIGHT:
                    case ALLEGRO_KEY_D:
                        key[RIGHT] = 1;
                        break;
                    case ALLEGRO_KEY_SPACE:
                        lancement_missile(&heros, missiles);
                        break;
                }
            } else if (event.type == ALLEGRO_EVENT_KEY_UP && waitInMilliseconds == -1) {
                switch (event.keyboard.keycode) {
                    case ALLEGRO_KEY_UP:
                    case ALLEGRO_KEY_W: // Z
                        key[UP] = 0;
                        break;
                    case ALLEGRO_KEY_DOWN:
                    case ALLEGRO_KEY_S:
                        key[DOWN] = 0;
                        break;
                    case ALLEGRO_KEY_LEFT:
                    case ALLEGRO_KEY_A: // Q
                        key[LEFT] = 0;
                        break;
                    case ALLEGRO_KEY_RIGHT:
                    case ALLEGRO_KEY_D:
                        key[RIGHT] = 0;
                        break;
                    case ALLEGRO_KEY_ESCAPE:
                        fin = 1;
                        break;
                    case ALLEGRO_KEY_P:
                        key[UP] = 0;
                        key[DOWN] = 0;
                        key[LEFT] = 0;
                        key[RIGHT] = 0;
                        pause = !pause;
                        dessin = 1;
                        break;
                }
            } else if (event.type == ALLEGRO_EVENT_TIMER) {
                if (waitInMilliseconds > 0) {
                    waitInMilliseconds--;
                    dessin = 1;
                } else if (!pause) {
                    if (key[UP]) {
                        monte(&heros);
                    }
                    if (key[DOWN]) {
                        descend(&heros);
                    }
                    if (key[LEFT]) {
                        gauche(&heros);
                    }
                    if (key[RIGHT]) {
                        droite(&heros);
                    }

                    avance_missiles(missiles);

                    apparition_ennemis(ennemis);


                    mouvement_ennemis(ennemis);


                    collision_missile(missiles, ennemis, &heros);
                    collision_heros(&heros, ennemis);

                    if (heros.vie <= 0) {
                        gameOver = 1;
                    }

                    dessin = 1;
                }
            }

            if (gameOver) {
                if (waitInMilliseconds == -1) {
                    waitInMilliseconds = 5 * 60;
                } else if (waitInMilliseconds == 0) {
                    heros.vie = 3;
                    heros.score = 0;
                    gameOver = 0;
                    key[UP] = 0;
                    key[DOWN] = 0;
                    key[LEFT] = 0;
                    key[RIGHT] = 0;
                    waitInMilliseconds = -1;
                }
            }

            if (dessin && al_is_event_queue_empty(queue)) {
                al_draw_bitmap_region(fond, x, y, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0, 0);
                affiche_ennemis(ennemis);
                affiche_missiles(missiles);
                affiche_heros(&heros);
                affiche_infos(heros, fontBangers60, fontBangers160);

                if (pause) {
                    al_draw_textf(fontBangers160, al_map_rgb(255, 255, 0), SCREEN_WIDTH / 2,
                                  SCREEN_HEIGHT / 2 - al_get_font_ascent(fontBangers160), ALLEGRO_ALIGN_CENTER,
                                  "Pause");
                }

                if (gameOver) {
                    al_draw_textf(fontBangers60, al_map_rgb(255, 255, 0), SCREEN_WIDTH / 2,
                                  SCREEN_HEIGHT - al_get_font_ascent(fontBangers160) - 20, ALLEGRO_ALIGN_CENTER,
                                  (waitInMilliseconds / 60) + 1 > 1 ? "Nouvelle partie dans %d secondes..."
                                                                    : "Nouvelle partie dans %d seconde...",
                                  (waitInMilliseconds / 60) + 1);
                }

                al_flip_display();

                dessin = 0;
            }

        } while (!fin);

        /*
         * Libération de la mémoire allouée dynamiquement :
         */
        al_destroy_bitmap(fond);
        al_destroy_bitmap(heros.image);
        al_destroy_font(fontBangers60);
        al_destroy_font(fontBangers160);
        al_destroy_event_queue(queue);
        al_destroy_display(display);
        al_destroy_timer(timer);

        return 0;

}