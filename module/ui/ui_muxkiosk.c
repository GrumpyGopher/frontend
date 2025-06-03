#include "ui_muxshare.h"
#include "ui_muxkiosk.h"

#define KIOSK(NAME, UDATA)          \
    lv_obj_t *ui_pnl##NAME##_kiosk; \
    lv_obj_t *ui_lbl##NAME##_kiosk; \
    lv_obj_t *ui_ico##NAME##_kiosk; \
    lv_obj_t *ui_dro##NAME##_kiosk;

KIOSK_ELEMENTS
#undef KIOSK

void init_muxkiosk(lv_obj_t *ui_pnlContent) {
#define KIOSK(NAME, UDATA) CREATE_OPTION_ITEM(kiosk, NAME);
    KIOSK_ELEMENTS
#undef KIOSK
}
