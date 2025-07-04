#include "StartupView.h"
#include "Version.h"
#include "lvgl/src/font/lv_font.h"
#include "lvgl/src/misc/lv_color.h"
#include <stdio.h>

using namespace Page;

#define COLOR_ORANGE    lv_color_hex(0xff931e)

void StartupView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_clear_flag(cont, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_size(cont, 250, 100);
    lv_obj_set_style_border_color(cont, COLOR_ORANGE, 0);
    lv_obj_set_style_border_side(cont, LV_BORDER_SIDE_BOTTOM, 0);
    lv_obj_set_style_border_width(cont, 3, 0);
    lv_obj_set_style_border_post(cont, true, 0);
    lv_obj_center(cont);
    ui.cont = cont;

    lv_obj_t* label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_36, 0);
    // lv_obj_set_style_text_font(label, ResourcePool::GetFont("agencyb_36"), 0);
    lv_obj_set_style_text_color(label, lv_palette_main(LV_PALETTE_GREEN), 0);
    lv_label_set_text(label, VERSION_FIRMWARE_NAME);
    lv_obj_center(label);
    ui.labelLogo = label;

    ui.anim_timeline = lv_anim_timeline_create();

    lv_coord_t height = lv_obj_get_style_height(ui.cont, 0);
    lv_coord_t y = lv_obj_get_y(ui.labelLogo);

#define ANIM_DEF(start_time, obj, attr, start, end) \
     {start_time, obj, LV_ANIM_EXEC(attr), start, end, 500, lv_anim_path_ease_out, true}

    lv_anim_timeline_wrapper_t wrapper[] =
    {
        ANIM_DEF(0, ui.cont, width, 0, lv_obj_get_style_width(ui.cont, 0)),
        ANIM_DEF(500, ui.labelLogo, y, lv_obj_get_style_height(ui.cont, 0), 0),
        LV_ANIM_TIMELINE_WRAPPER_END
    };

    lv_anim_timeline_add_wrapper(ui.anim_timeline, wrapper);
}

void StartupView::Delete()
{
    if(ui.anim_timeline)
    {
        lv_anim_timeline_del(ui.anim_timeline);
        ui.anim_timeline = nullptr;
        printf("anim_timeline deleted\n");
    }
}
