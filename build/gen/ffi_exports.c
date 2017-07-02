/* Auto-generated, do not edit. */

/*
 * Symbols filtered by the following globs:
 */

#include <stdbool.h>

#include "fw/src/mgos_dlsym.h"

/* NOTE: signatures are fake */
double  ceil(double);
double  cos(double);
void  esp32_uart_config_set_fifo(int, void *, int, int, int, int);
void  esp32_uart_config_set_pins(int, void *, int, int, int, int);
double  exp(double);
double  fabs(double);
void  fclose(void *);
double  floor(double);
double  fmax(double, double);
double  fmin(double, double);
void * fopen(char *, char *);
int  fread(char *, int, int, void *);
void  free(void *);
void  free(void *);
int  fwrite(char *, int, int, void *);
void * get_cfg();
int  get_led_gpio_pin();
int  hall_sens_read(void);
double  log(double);
void * malloc(int);
void  mbuf_remove(void *, int);
int  mg_conn_addr_to_str(void *, char *, int, int);
void  mg_send(void *, void *, int);
void  mg_set_protocol_http_websocket(void *);
double  mg_time(void);
int  mgos_adc_enable(int);
int  mgos_adc_read(int);
char * mgos_aws_shadow_event_name(int);
bool  mgos_aws_shadow_get();
double  mgos_aws_shadow_get_last_state_version(void);
void  mgos_aws_shadow_set_state_handler_simple(int (*)(void *, int, char *, char *, char *, char *), void *);
int  mgos_aws_shadow_update_simple(double, char *);
void * mgos_bind(char *, void (*)(void *, int, void *, void *), void *);
void  mgos_bitbang_write_bits_js(int, int, int, void *, int);
void  mgos_clear_timer(int);
void * mgos_conf_find_schema_entry(char *, void *);
double  mgos_conf_value_double(void *, void *);
int  mgos_conf_value_int(void *, void *);
char * mgos_conf_value_string_nonnull(void *, void *);
int  mgos_conf_value_type(void *);
void * mgos_connect(char *, void (*)(void *, int, void *, void *), void *);
void * mgos_connect_http(char *, void (*)(void *, int, void *, void *), void *);
void * mgos_connect_http_ssl(char *, void (*)(void *, int, void *, void *), void *, char *, char *, char *);
void * mgos_connect_ssl(char *, void (*)(void *, int, void *, void *), void *, char *, char *, char *);
void  mgos_disconnect(void *);
void * mgos_get_body_ptr(void *);
int  mgos_get_free_heap_size();
int  mgos_get_heap_size();
int  mgos_get_mbuf_len(void *);
void * mgos_get_mbuf_ptr(void *);
int  mgos_get_mgstr_len(void *);
void * mgos_get_mgstr_ptr(void *);
void * mgos_get_msg_ptr(void *);
void * mgos_get_recv_mbuf(void *);
int  mgos_gpio_disable_int(int);
int  mgos_gpio_enable_int(int);
int  mgos_gpio_read(int);
int  mgos_gpio_set_button_handler(int,int,int,int,void(*)(int, void *), void *);
int  mgos_gpio_set_int_handler(int,int,void(*)(int,void *),void *);
int  mgos_gpio_set_mode(int,int);
int  mgos_gpio_set_pull(int,int);
int  mgos_gpio_toggle(int);
void  mgos_gpio_write(int,int);
void  mgos_i2c_close(void *conn);
void * mgos_i2c_get_global(void);
void * mgos_i2c_get_global(void);
bool  mgos_i2c_read(void *, int, char *, int, bool);
int  mgos_i2c_read_reg_b(void *, int, int);
int  mgos_i2c_read_reg_n(void *, int, int, int, char *);
int  mgos_i2c_read_reg_w(void *, int, int);
void  mgos_i2c_stop(void *);
bool  mgos_i2c_write(void *, int, char *, int, bool);
bool  mgos_i2c_write_reg_b(void *, int, int, int);
int  mgos_i2c_write_reg_n(void *, int, int, int, char *);
bool  mgos_i2c_write_reg_w(void *, int, int, int);
bool  mgos_is_inbound(void *);
void  mgos_log(char *, int, int, char *);
void  mgos_mqtt_add_global_handler(void (*)(void *, int, void *, void *), void *);
int  mgos_mqtt_pub(char *, void *, int, int);
void  mgos_mqtt_sub(char *, void (*)(void *, void *, int, void *, int, void *), void *);
bool  mgos_pwm_set(int, int, int);
void * mgos_rpc_add_handler(void *, void (*)(void *, char *, char *, void *), void *);
bool  mgos_rpc_call(char *, char *, char *, void (*)(char *, int, char *, void *), void *);
bool  mgos_rpc_send_response(void *, char *);
int  mgos_set_timer(int,bool,void(*)(void *),void *);
void  mgos_ssd1306_begin(void *, int, int, int);
void  mgos_ssd1306_clear_display(void *);
void  mgos_ssd1306_close(void *);
void  mgos_ssd1306_command(void *, int);
void * mgos_ssd1306_create_i2c(int, int);
void * mgos_ssd1306_create_spi(int, int, int, int);
void  mgos_ssd1306_dim(void *, int);
void  mgos_ssd1306_display(void *);
void  mgos_ssd1306_draw_char(void *, int, int, int, int, int);
void  mgos_ssd1306_draw_circle(void *, int, int, int);
void  mgos_ssd1306_draw_circle_helper(void *, int, int, int, int);
void  mgos_ssd1306_draw_fast_hline(void *, int, int, int, int);
void  mgos_ssd1306_draw_fast_vline(void *, int, int, int, int);
void  mgos_ssd1306_draw_pixel(void *, int, int, int);
void  mgos_ssd1306_draw_round_rect(void *, int, int, int, int, int);
void  mgos_ssd1306_draw_triangle(void *, int, int, int, int);
void  mgos_ssd1306_fill_circle(void *, int, int, int);
void  mgos_ssd1306_fill_circle_helper(void *, int, int, int, int, int);
void  mgos_ssd1306_fill_round_rect(void *, int, int, int, int, int);
void  mgos_ssd1306_fill_triangle(void *, int, int, int, int);
int  mgos_ssd1306_get_cursor_x(void *);
int  mgos_ssd1306_get_cursor_y(void *);
int  mgos_ssd1306_get_rotation(void *);
int  mgos_ssd1306_height(void *);
void  mgos_ssd1306_invert_display(void *, int);
int  mgos_ssd1306_make_xy_pair(int, int);
void  mgos_ssd1306_set_cursor(void *, int, int);
void  mgos_ssd1306_set_text_color(void *, int);
void  mgos_ssd1306_set_text_color_bg(void *, int, int);
void  mgos_ssd1306_set_text_size(void *, int);
void  mgos_ssd1306_set_text_wrap(void *, int);
void  mgos_ssd1306_start_scroll_diag_left(void *, int, int);
void  mgos_ssd1306_start_scroll_diag_right(void *, int, int);
void  mgos_ssd1306_start_scroll_left(void *, int, int);
void  mgos_ssd1306_start_scroll_right(void *, int, int);
void  mgos_ssd1306_stop_scroll(void *);
int  mgos_ssd1306_width(void *);
int  mgos_ssd1306_write(void *, char *, int);
int  mgos_strftime(char *, int, char *, int);
void  mgos_system_restart(int);
void * mgos_uart_config_get_default(int);
void  mgos_uart_config_set_baud_rate(void *, int);
void  mgos_uart_config_set_rx_params(void *, int, int, int);
void  mgos_uart_config_set_tx_params(void *, int, int);
int  mgos_uart_configure(int, void *);
void  mgos_uart_flush(int);
int  mgos_uart_is_rx_enabled(int);
int  mgos_uart_read(int, void *, int);
int  mgos_uart_read_avail(int);
void  mgos_uart_set_dispatcher(int, void(*)(int, void *), void *);
void  mgos_uart_set_rx_enabled(int, int);
int  mgos_uart_write(int, char *, int);
int  mgos_uart_write_avail(int);
double  mgos_uptime();
void  mgos_usleep(int);
void  mgos_wdt_feed();
void  mgos_wifi_add_on_change_cb(void (*)(int, void *), void *);
char * mjs_get_bcode_filename_by_offset(void *, int);
int  mjs_get_lineno_by_offset(void *, int);
int  mjs_get_offset_by_call_frame_num(void *, int);
double  mjs_mem_get_int(void *, int, int);
void * mjs_mem_get_ptr(void *, int);
double  mjs_mem_get_uint(void *, int, int);
void  mjs_mem_set_uint(void *, int, int, int);
void * mjs_mem_to_ptr(int);
double  pow(double, double);
int  rand();
int  remove(char *);
double  round(double);
double  sin(double);
double  sqrt(double);
void * strdup(char *);
void * sys_config_schema();
int  temprature_sens_read(void);

const struct mgos_ffi_export ffi_exports[] = {
  {"ceil", ceil},
  {"cos", cos},
  {"esp32_uart_config_set_fifo", esp32_uart_config_set_fifo},
  {"esp32_uart_config_set_pins", esp32_uart_config_set_pins},
  {"exp", exp},
  {"fabs", fabs},
  {"fclose", fclose},
  {"floor", floor},
  {"fmax", fmax},
  {"fmin", fmin},
  {"fopen", fopen},
  {"fread", fread},
  {"free", free},
  {"free", free},
  {"fwrite", fwrite},
  {"get_cfg", get_cfg},
  {"get_led_gpio_pin", get_led_gpio_pin},
  {"hall_sens_read", hall_sens_read},
  {"log", log},
  {"malloc", malloc},
  {"mbuf_remove", mbuf_remove},
  {"mg_conn_addr_to_str", mg_conn_addr_to_str},
  {"mg_send", mg_send},
  {"mg_set_protocol_http_websocket", mg_set_protocol_http_websocket},
  {"mg_time", mg_time},
  {"mgos_adc_enable", mgos_adc_enable},
  {"mgos_adc_read", mgos_adc_read},
  {"mgos_aws_shadow_event_name", mgos_aws_shadow_event_name},
  {"mgos_aws_shadow_get", mgos_aws_shadow_get},
  {"mgos_aws_shadow_get_last_state_version", mgos_aws_shadow_get_last_state_version},
  {"mgos_aws_shadow_set_state_handler_simple", mgos_aws_shadow_set_state_handler_simple},
  {"mgos_aws_shadow_update_simple", mgos_aws_shadow_update_simple},
  {"mgos_bind", mgos_bind},
  {"mgos_bitbang_write_bits_js", mgos_bitbang_write_bits_js},
  {"mgos_clear_timer", mgos_clear_timer},
  {"mgos_conf_find_schema_entry", mgos_conf_find_schema_entry},
  {"mgos_conf_value_double", mgos_conf_value_double},
  {"mgos_conf_value_int", mgos_conf_value_int},
  {"mgos_conf_value_string_nonnull", mgos_conf_value_string_nonnull},
  {"mgos_conf_value_type", mgos_conf_value_type},
  {"mgos_connect", mgos_connect},
  {"mgos_connect_http", mgos_connect_http},
  {"mgos_connect_http_ssl", mgos_connect_http_ssl},
  {"mgos_connect_ssl", mgos_connect_ssl},
  {"mgos_disconnect", mgos_disconnect},
  {"mgos_get_body_ptr", mgos_get_body_ptr},
  {"mgos_get_free_heap_size", mgos_get_free_heap_size},
  {"mgos_get_heap_size", mgos_get_heap_size},
  {"mgos_get_mbuf_len", mgos_get_mbuf_len},
  {"mgos_get_mbuf_ptr", mgos_get_mbuf_ptr},
  {"mgos_get_mgstr_len", mgos_get_mgstr_len},
  {"mgos_get_mgstr_ptr", mgos_get_mgstr_ptr},
  {"mgos_get_msg_ptr", mgos_get_msg_ptr},
  {"mgos_get_recv_mbuf", mgos_get_recv_mbuf},
  {"mgos_gpio_disable_int", mgos_gpio_disable_int},
  {"mgos_gpio_enable_int", mgos_gpio_enable_int},
  {"mgos_gpio_read", mgos_gpio_read},
  {"mgos_gpio_set_button_handler", mgos_gpio_set_button_handler},
  {"mgos_gpio_set_int_handler", mgos_gpio_set_int_handler},
  {"mgos_gpio_set_mode", mgos_gpio_set_mode},
  {"mgos_gpio_set_pull", mgos_gpio_set_pull},
  {"mgos_gpio_toggle", mgos_gpio_toggle},
  {"mgos_gpio_write", mgos_gpio_write},
  {"mgos_i2c_close", mgos_i2c_close},
  {"mgos_i2c_get_global", mgos_i2c_get_global},
  {"mgos_i2c_get_global", mgos_i2c_get_global},
  {"mgos_i2c_read", mgos_i2c_read},
  {"mgos_i2c_read_reg_b", mgos_i2c_read_reg_b},
  {"mgos_i2c_read_reg_n", mgos_i2c_read_reg_n},
  {"mgos_i2c_read_reg_w", mgos_i2c_read_reg_w},
  {"mgos_i2c_stop", mgos_i2c_stop},
  {"mgos_i2c_write", mgos_i2c_write},
  {"mgos_i2c_write_reg_b", mgos_i2c_write_reg_b},
  {"mgos_i2c_write_reg_n", mgos_i2c_write_reg_n},
  {"mgos_i2c_write_reg_w", mgos_i2c_write_reg_w},
  {"mgos_is_inbound", mgos_is_inbound},
  {"mgos_log", mgos_log},
  {"mgos_mqtt_add_global_handler", mgos_mqtt_add_global_handler},
  {"mgos_mqtt_pub", mgos_mqtt_pub},
  {"mgos_mqtt_sub", mgos_mqtt_sub},
  {"mgos_pwm_set", mgos_pwm_set},
  {"mgos_rpc_add_handler", mgos_rpc_add_handler},
  {"mgos_rpc_call", mgos_rpc_call},
  {"mgos_rpc_send_response", mgos_rpc_send_response},
  {"mgos_set_timer", mgos_set_timer},
  {"mgos_ssd1306_begin", mgos_ssd1306_begin},
  {"mgos_ssd1306_clear_display", mgos_ssd1306_clear_display},
  {"mgos_ssd1306_close", mgos_ssd1306_close},
  {"mgos_ssd1306_command", mgos_ssd1306_command},
  {"mgos_ssd1306_create_i2c", mgos_ssd1306_create_i2c},
  {"mgos_ssd1306_create_spi", mgos_ssd1306_create_spi},
  {"mgos_ssd1306_dim", mgos_ssd1306_dim},
  {"mgos_ssd1306_display", mgos_ssd1306_display},
  {"mgos_ssd1306_draw_char", mgos_ssd1306_draw_char},
  {"mgos_ssd1306_draw_circle", mgos_ssd1306_draw_circle},
  {"mgos_ssd1306_draw_circle_helper", mgos_ssd1306_draw_circle_helper},
  {"mgos_ssd1306_draw_fast_hline", mgos_ssd1306_draw_fast_hline},
  {"mgos_ssd1306_draw_fast_vline", mgos_ssd1306_draw_fast_vline},
  {"mgos_ssd1306_draw_pixel", mgos_ssd1306_draw_pixel},
  {"mgos_ssd1306_draw_round_rect", mgos_ssd1306_draw_round_rect},
  {"mgos_ssd1306_draw_triangle", mgos_ssd1306_draw_triangle},
  {"mgos_ssd1306_fill_circle", mgos_ssd1306_fill_circle},
  {"mgos_ssd1306_fill_circle_helper", mgos_ssd1306_fill_circle_helper},
  {"mgos_ssd1306_fill_round_rect", mgos_ssd1306_fill_round_rect},
  {"mgos_ssd1306_fill_triangle", mgos_ssd1306_fill_triangle},
  {"mgos_ssd1306_get_cursor_x", mgos_ssd1306_get_cursor_x},
  {"mgos_ssd1306_get_cursor_y", mgos_ssd1306_get_cursor_y},
  {"mgos_ssd1306_get_rotation", mgos_ssd1306_get_rotation},
  {"mgos_ssd1306_height", mgos_ssd1306_height},
  {"mgos_ssd1306_invert_display", mgos_ssd1306_invert_display},
  {"mgos_ssd1306_make_xy_pair", mgos_ssd1306_make_xy_pair},
  {"mgos_ssd1306_set_cursor", mgos_ssd1306_set_cursor},
  {"mgos_ssd1306_set_text_color", mgos_ssd1306_set_text_color},
  {"mgos_ssd1306_set_text_color_bg", mgos_ssd1306_set_text_color_bg},
  {"mgos_ssd1306_set_text_size", mgos_ssd1306_set_text_size},
  {"mgos_ssd1306_set_text_wrap", mgos_ssd1306_set_text_wrap},
  {"mgos_ssd1306_start_scroll_diag_left", mgos_ssd1306_start_scroll_diag_left},
  {"mgos_ssd1306_start_scroll_diag_right", mgos_ssd1306_start_scroll_diag_right},
  {"mgos_ssd1306_start_scroll_left", mgos_ssd1306_start_scroll_left},
  {"mgos_ssd1306_start_scroll_right", mgos_ssd1306_start_scroll_right},
  {"mgos_ssd1306_stop_scroll", mgos_ssd1306_stop_scroll},
  {"mgos_ssd1306_width", mgos_ssd1306_width},
  {"mgos_ssd1306_write", mgos_ssd1306_write},
  {"mgos_strftime", mgos_strftime},
  {"mgos_system_restart", mgos_system_restart},
  {"mgos_uart_config_get_default", mgos_uart_config_get_default},
  {"mgos_uart_config_set_baud_rate", mgos_uart_config_set_baud_rate},
  {"mgos_uart_config_set_rx_params", mgos_uart_config_set_rx_params},
  {"mgos_uart_config_set_tx_params", mgos_uart_config_set_tx_params},
  {"mgos_uart_configure", mgos_uart_configure},
  {"mgos_uart_flush", mgos_uart_flush},
  {"mgos_uart_is_rx_enabled", mgos_uart_is_rx_enabled},
  {"mgos_uart_read", mgos_uart_read},
  {"mgos_uart_read_avail", mgos_uart_read_avail},
  {"mgos_uart_set_dispatcher", mgos_uart_set_dispatcher},
  {"mgos_uart_set_rx_enabled", mgos_uart_set_rx_enabled},
  {"mgos_uart_write", mgos_uart_write},
  {"mgos_uart_write_avail", mgos_uart_write_avail},
  {"mgos_uptime", mgos_uptime},
  {"mgos_usleep", mgos_usleep},
  {"mgos_wdt_feed", mgos_wdt_feed},
  {"mgos_wifi_add_on_change_cb", mgos_wifi_add_on_change_cb},
  {"mjs_get_bcode_filename_by_offset", mjs_get_bcode_filename_by_offset},
  {"mjs_get_lineno_by_offset", mjs_get_lineno_by_offset},
  {"mjs_get_offset_by_call_frame_num", mjs_get_offset_by_call_frame_num},
  {"mjs_mem_get_int", mjs_mem_get_int},
  {"mjs_mem_get_ptr", mjs_mem_get_ptr},
  {"mjs_mem_get_uint", mjs_mem_get_uint},
  {"mjs_mem_set_uint", mjs_mem_set_uint},
  {"mjs_mem_to_ptr", mjs_mem_to_ptr},
  {"pow", pow},
  {"rand", rand},
  {"remove", remove},
  {"round", round},
  {"sin", sin},
  {"sqrt", sqrt},
  {"strdup", strdup},
  {"sys_config_schema", sys_config_schema},
  {"temprature_sens_read", temprature_sens_read},
};
const int ffi_exports_cnt = 159;
