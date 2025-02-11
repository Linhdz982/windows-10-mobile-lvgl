// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: W10M

#include "../ui.h"

void ui_appScreen_screen_init(void)
{
    ui_appScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_appScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appTitlePanel = lv_obj_create(ui_appScreen);
    lv_obj_set_width(ui_appTitlePanel, 320);
    lv_obj_set_height(ui_appTitlePanel, 70);
    lv_obj_set_align(ui_appTitlePanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_appTitlePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_appTitlePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appTitlePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appTitleName = lv_label_create(ui_appTitlePanel);
    lv_obj_set_width(ui_appTitleName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appTitleName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appTitleName, 52);
    lv_obj_set_y(ui_appTitleName, 10);
    lv_obj_set_align(ui_appTitleName, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_appTitleName, "App Name");
    lv_obj_set_style_text_font(ui_appTitleName, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appTitleIcon = lv_img_create(ui_appTitlePanel);
    lv_img_set_src(ui_appTitleIcon, &ui_img_wp_settings_png);
    lv_obj_set_width(ui_appTitleIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appTitleIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appTitleIcon, 10);
    lv_obj_set_y(ui_appTitleIcon, 10);
    lv_obj_set_align(ui_appTitleIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_appTitleIcon, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appTitleIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_appTitleIcon, lv_color_hex(0x2062E3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_appTitleIcon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appMainPanel = lv_obj_create(ui_appScreen);
    lv_obj_set_width(ui_appMainPanel, 320);
    lv_obj_set_height(ui_appMainPanel, 410);
    lv_obj_set_x(ui_appMainPanel, 0);
    lv_obj_set_y(ui_appMainPanel, 70);
    lv_obj_set_align(ui_appMainPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_appMainPanel, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_appMainPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_scrollbar_mode(ui_appMainPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_appMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appMainPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_appMainPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_appMainPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_appMainPanel, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_appMainPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_appMainPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_appMainPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label23 = lv_label_create(ui_appMainPanel);
    lv_obj_set_width(ui_Label23, 280);
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "Sample text widget for general information in the app");
    lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_genSwitchPanel = lv_obj_create(ui_appMainPanel);
    lv_obj_set_width(ui_genSwitchPanel, 280);
    lv_obj_set_height(ui_genSwitchPanel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_genSwitchPanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_genSwitchPanel, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_genSwitchPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_genSwitchPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_genSwitchPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_genSwitchPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_genSwitch = lv_switch_create(ui_genSwitchPanel);
    lv_obj_set_width(ui_genSwitch, 50);
    lv_obj_set_height(ui_genSwitch, 25);
    lv_obj_set_align(ui_genSwitch, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_genSwitch, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_genSwitch, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_genSwitch, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_genSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_genSwitch, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_genSwitch, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_genSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_genSwitch, 1, LV_PART_MAIN | LV_STATE_CHECKED);


    ui_genSwitchText = lv_label_create(ui_genSwitchPanel);
    lv_obj_set_width(ui_genSwitchText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_genSwitchText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_genSwitchText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_genSwitchText, "Off");
    lv_obj_set_style_text_font(ui_genSwitchText, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_appMainPanel);
    lv_obj_set_width(ui_Button1, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_Button1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x4A4A4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Button1, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Button1, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Button1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Button1, 7, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label25 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, "Button");
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Dropdown1 = lv_dropdown_create(ui_appMainPanel);
    lv_obj_set_width(ui_Dropdown1, 280);
    lv_obj_set_height(ui_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_radius(ui_Dropdown1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Dropdown1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Dropdown1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Dropdown1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Dropdown1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Dropdown1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(lv_dropdown_get_list(ui_Dropdown1), 0,  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_dropdown_get_list(ui_Dropdown1), 0,  LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(lv_dropdown_get_list(ui_Dropdown1), 0,  LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_appMainPanel);
    lv_obj_set_width(ui_Label27, 280);
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "Title");
    lv_obj_set_style_text_font(ui_Label27, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_appMainPanel);
    lv_slider_set_value(ui_Slider1, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider1, 270);
    lv_obj_set_height(ui_Slider1, 2);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x646464), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);



    lv_obj_add_event_cb(ui_appTitleIcon, ui_event_appTitleIcon, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_genSwitch, ui_event_genSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_appScreen, ui_event_app_load, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_appScreen, ui_event_screen_load, LV_EVENT_SCREEN_LOADED, NULL);

}
