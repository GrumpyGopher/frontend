#include <string.h>
#include "../common/common.h"
#include "lookup.h"

typedef struct {
    const char *name;
    const char *value;
} LookupName;

static const LookupName lookup_table[] = {
        {"600",        "600"},
        {"64streej",   "64th. Street - A Detective Story (Japan)"},
        {"64street",   "64th. Street - A Detective Story (World)"},
        {"64streetj",  "64th. Street - A Detective Story (Japan, set 1)"},
        {"64streetja", "64th. Street - A Detective Story (Japan, set 2)"},
};

const char *lookup_6(const char *name) {
    if (!name) return NULL;
    for (size_t i = 0; i < A_SIZE(lookup_table); i++) {
        if (strcmp(lookup_table[i].name, name) == 0) {
            return lookup_table[i].value;
        }
    }
    return NULL;
}

const char *r_lookup_6(const char *value) {
    if (!value) return NULL;
    for (size_t i = 0; i < A_SIZE(lookup_table); i++) {
        if (strstr(lookup_table[i].value, value)) {
            return lookup_table[i].name;
        }
    }
    return NULL;
}
