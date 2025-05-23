#include "font.h"
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include "../font/audiowide_regular.h"
#include "../font/bokor_regular.h"
#include "../font/bubblegum_sans_regular.h"
#include "../font/geo_regular.h"
#include "../font/kalam_regular.h"
#include "../font/notosans_medium.h"
#include "../font/pressstart2p_regular.h"
#include "../font/rajdhani_medium.h"

Font fonts[MAX_FONTS];
int font_count = 0;

void init_font_list(void) {
    fonts[0].name = "Audiowide";
    fonts[0].data = audiowide_regular_ttf;
    fonts[0].length = audiowide_regular_ttf_len;

    fonts[1].name = "Bokor";
    fonts[1].data = bokor_regular_ttf;
    fonts[1].length = bokor_regular_ttf_len;

    fonts[2].name = "Bubblegum Sans";
    fonts[2].data = bubblegum_sans_regular_ttf;
    fonts[2].length = bubblegum_sans_regular_ttf_len;

    fonts[3].name = "Geo";
    fonts[3].data = geo_regular_ttf;
    fonts[3].length = geo_regular_ttf_len;

    fonts[4].name = "Kalam";
    fonts[4].data = kalam_regular_ttf;
    fonts[4].length = kalam_regular_ttf_len;

    fonts[5].name = "Noto Sans";
    fonts[5].data = notosans_medium_ttf;
    fonts[5].length = notosans_medium_ttf_len;

    fonts[6].name = "Press_Start_2P";
    fonts[6].data = pressstart2p_regular_ttf;
    fonts[6].length = pressstart2p_regular_ttf_len;

    fonts[7].name = "Rajdhani";
    fonts[7].data = rajdhani_medium_ttf;
    fonts[7].length = rajdhani_medium_ttf_len;

    font_count = 8;
}

int get_font_id_by_name(char *font_name) {
    if (font_count == 0) init_font_list();

    int noto_sans_index;
    for (size_t i = 0; i < font_count; i++) {
        if (strcasecmp(fonts[i].name, font_name) == 0) {
            return i;
        }
        if (strcmp(fonts[i].name, "Noto Sans") == 0) {
            noto_sans_index = i;
        }
    }    
    return noto_sans_index;
}