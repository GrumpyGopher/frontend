#pragma once

typedef struct {
    const char* name;              // Font name
    const unsigned char* data;     // Pointer to font binary data
    unsigned int length;     // Length of the data
} Font;

#define MAX_FONTS 8
extern Font fonts[MAX_FONTS];
extern int font_count;

void init_font_list(void);
int get_font_id_by_name(char *font_name);
