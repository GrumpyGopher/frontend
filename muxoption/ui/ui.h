#pragma once

#include "../../lvgl/lvgl.h"

void ui_screen_init(lv_obj_t *ui_pnlContent);

extern lv_obj_t *ui_scrOption;
extern lv_obj_t *ui_pnlCore;
extern lv_obj_t *ui_pnlGovernor;
extern lv_obj_t *ui_lblCore;
extern lv_obj_t *ui_lblGovernor;
extern lv_obj_t *ui_icoCore;
extern lv_obj_t *ui_icoGovernor;

void ui_init(lv_obj_t *ui_pnlContent);