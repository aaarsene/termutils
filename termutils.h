#ifndef TERMUTILS
#define TERMUTILS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

// Codes des attributs visuels du terminal
typedef enum
{
    /* --- Attributs --- */
    BOLD = 1,               // Haute intensité (gras)
    DIM = 2,                // Faible intensité
    UNDERLINED = 4,         // Souligné
    BLINK = 5,              // Clignotement
    REVERSE = 7,            // Inverse la couleur du texte et du fond
    HIDDEN = 8,             // Caché

    /* --- Réinitialisation des attributs --- */
    RESET = 0,              // Réinitialise tous les attributs
    RESET_BOLD = 21,
    RESET_DIM = 22,
    RESET_UNDERLINED = 24,
    RESET_BLINK = 25,
    RESET_REVERSE = 27,
    RESET_HIDDEN = 28,

    /* --- Couleurs de texte --- */
    FG_DEFAULT = 39,
    FG_BLACK = 30,
    FG_RED = 31,
    FG_GREEN = 32,
    FG_YELLOW = 33,
    FG_BLUE = 34,
    FG_MAGENTA = 35,
    FG_CYAN = 36,
    FG_LIGHT_GRAY = 37,
    FG_DARK_GRAY = 90,
    FG_LIGHT_RED = 91,
    FG_LIGHT_GREEN = 92,
    FG_LIGHT_YELLOW = 93,
    FG_LIGHT_BLUE = 94,
    FG_LIGHT_MAGENTA = 95,
    FG_LIGHT_CYAN = 96,
    FG_WHITE = 97,

    /* --- Couleurs de fond --- */
    BG_DEFAULT = 49,
    BG_BLACK = 40,
    BG_RED = 41,
    BG_GREEN = 42,
    BG_YELLOW = 43,
    BG_BLUE = 44,
    BG_MAGENTA = 45,
    BG_CYAN = 46,
    BG_LIGHT_GRAY = 47,
    BG_DARK_GRAY = 100,
    BG_LIGHT_RED = 101,
    BG_LIGHT_GREEN = 102,
    BG_LIGHT_YELLOW = 103,
    BG_LIGHT_BLUE = 104,
    BG_LIGHT_MAGENTA = 105,
    BG_LIGHT_CYAN = 106,
    BG_WHITE = 107
}
ATTRIBUTES;


int kbhit (void);

void textattr (ATTRIBUTES param);

void gotoxy (int x, int y);

#endif
