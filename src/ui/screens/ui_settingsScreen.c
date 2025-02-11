// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: W10M

#include "../ui.h"

void ui_settingsScreen_screen_init(void)
{
    ui_settingsScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_settingsScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_settingsScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingsScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsTitlePanel = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_settingsTitlePanel, 320);
    lv_obj_set_height(ui_settingsTitlePanel, 70);
    lv_obj_set_align(ui_settingsTitlePanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_settingsTitlePanel, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_settingsTitlePanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_END);
    lv_obj_clear_flag(ui_settingsTitlePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_settingsTitlePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingsTitlePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_settingsTitlePanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_settingsTitlePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_settingsTitlePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_settingsTitlePanel, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_settingsTitlePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_settingsTitlePanel, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsBack = lv_img_create(ui_settingsTitlePanel);
    lv_img_set_src(ui_settingsBack, &ui_img_settings_back_png);
    lv_obj_set_width(ui_settingsBack, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_settingsBack, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_settingsBack, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_settingsBack, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_settingsBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_settingsBack, lv_color_hex(0x2061E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_settingsBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsAppIcon = lv_img_create(ui_settingsTitlePanel);
    lv_img_set_src(ui_settingsAppIcon, &ui_img_wp_settings_png);
    lv_obj_set_width(ui_settingsAppIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_settingsAppIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_settingsAppIcon, 10);
    lv_obj_set_y(ui_settingsAppIcon, 10);
    lv_obj_set_align(ui_settingsAppIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_settingsAppIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_settingsAppIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_settingsAppIcon, lv_color_hex(0x2062E3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_settingsAppIcon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsAppTitle = lv_label_create(ui_settingsTitlePanel);
    lv_obj_set_width(ui_settingsAppTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_settingsAppTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_settingsAppTitle, 52);
    lv_obj_set_y(ui_settingsAppTitle, 10);
    lv_obj_set_align(ui_settingsAppTitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_settingsAppTitle, "Settings");
    lv_obj_set_style_text_font(ui_settingsAppTitle, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingsMainPanel = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_settingsMainPanel, 320);
    lv_obj_set_height(ui_settingsMainPanel, 410);
    lv_obj_set_x(ui_settingsMainPanel, 0);
    lv_obj_set_y(ui_settingsMainPanel, 70);
    lv_obj_set_align(ui_settingsMainPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_settingsMainPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_settingsMainPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_scrollbar_mode(ui_settingsMainPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_settingsMainPanel, LV_DIR_VER);
    lv_obj_set_style_radius(ui_settingsMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingsMainPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingsMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingsMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_settingsMainPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_settingsMainPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_personalizationPanel = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_personalizationPanel, 320);
    lv_obj_set_height(ui_personalizationPanel, 410);
    lv_obj_set_x(ui_personalizationPanel, 0);
    lv_obj_set_y(ui_personalizationPanel, 70);
    lv_obj_set_align(ui_personalizationPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_personalizationPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_flag(ui_personalizationPanel, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_flex_align(ui_personalizationPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_personalizationPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_personalizationPanel, LV_DIR_VER);
    lv_obj_set_style_radius(ui_personalizationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_personalizationPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_personalizationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_personalizationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_personalizationPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_personalizationPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_personalizationPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_personalizationPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_networkPanel = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_networkPanel, 320);
    lv_obj_set_height(ui_networkPanel, 410);
    lv_obj_set_x(ui_networkPanel, 0);
    lv_obj_set_y(ui_networkPanel, 70);
    lv_obj_set_align(ui_networkPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_networkPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_flag(ui_networkPanel, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_flex_align(ui_networkPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_networkPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_networkPanel, LV_DIR_VER);
    lv_obj_set_style_radius(ui_networkPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_networkPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_networkPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_networkPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_networkPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_networkPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_networkPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_networkPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_systemPanel = lv_obj_create(ui_settingsScreen);
    lv_obj_set_width(ui_systemPanel, 320);
    lv_obj_set_height(ui_systemPanel, 410);
    lv_obj_set_x(ui_systemPanel, 0);
    lv_obj_set_y(ui_systemPanel, 70);
    lv_obj_set_align(ui_systemPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_systemPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_flag(ui_systemPanel, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_flex_align(ui_systemPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_systemPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_systemPanel, LV_DIR_VER);
    lv_obj_set_style_radius(ui_systemPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_systemPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_systemPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_systemPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_systemPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_systemPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_systemPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_systemPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_themePanel = lv_obj_create(ui_personalizationPanel);
    lv_obj_set_width(ui_themePanel, 225);
    lv_obj_set_height(ui_themePanel, LV_SIZE_CONTENT);
    lv_obj_set_align(ui_themePanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_themePanel, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_themePanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_themePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_themePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_themePanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_themePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_themePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_themePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_themePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_themePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_themePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_themePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_themePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_backgroundSelect = lv_obj_create(ui_personalizationPanel);
    lv_obj_set_width(ui_backgroundSelect, 280);
    lv_obj_set_height(ui_backgroundSelect, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_backgroundSelect, 0);
    lv_obj_set_y(ui_backgroundSelect, 23);
    lv_obj_set_align(ui_backgroundSelect, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_backgroundSelect, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_backgroundSelect, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_backgroundSelect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_backgroundSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_backgroundSelect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backgroundSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_backgroundSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_backgroundSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_backgroundSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_backgroundSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_backgroundSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_backgroundSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_backgroundSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lockscreenSelect = lv_obj_create(ui_personalizationPanel);
    lv_obj_set_width(ui_lockscreenSelect, 280);
    lv_obj_set_height(ui_lockscreenSelect, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_lockscreenSelect, 0);
    lv_obj_set_y(ui_lockscreenSelect, 23);
    lv_obj_set_align(ui_lockscreenSelect, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_lockscreenSelect, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_lockscreenSelect, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_lockscreenSelect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_lockscreenSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lockscreenSelect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lockscreenSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_lockscreenSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lockscreenSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lockscreenSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lockscreenSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lockscreenSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_lockscreenSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_lockscreenSelect, 5, LV_PART_MAIN | LV_STATE_DEFAULT);


    lv_obj_add_event_cb(ui_settingsScreen, ui_event_screen_load, LV_EVENT_SCREEN_LOADED, NULL);

}
