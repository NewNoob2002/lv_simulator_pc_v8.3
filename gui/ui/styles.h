#ifndef EEZ_LVGL_UI_STYLES_H
#define EEZ_LVGL_UI_STYLES_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    lv_obj_t *chart;
    lv_chart_series_t *voltage_series;
    lv_chart_series_t *current_series;
    uint32_t point_count;
    uint32_t max_points;
    float time_base;  // 时间基准，单位秒
} battery_chart_t;

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_STYLES_H*/