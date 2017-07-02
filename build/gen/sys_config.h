/* Generated file - do not edit. */

#ifndef SYS_CONFIG_H_
#define SYS_CONFIG_H_

#include "fw/src/mgos_config.h"

struct sys_config {
  struct sys_config_sntp {
    int enable;
    char *server;
    int retry_min;
    int retry_max;
    int update_interval;
  } sntp;
  struct sys_config_update {
    int timeout;
    int commit_timeout;
    char *url;
    int interval;
    char *ssl_ca_file;
    char *ssl_client_cert_file;
    char *ssl_server_name;
    int enable_post;
  } update;
  struct sys_config_wifi {
    struct sys_config_wifi_sta {
      int enable;
      char *ssid;
      char *pass;
      char *ip;
      char *netmask;
      char *gw;
      char *nameserver;
      char *dhcp_hostname;
    } sta;
    struct sys_config_wifi_ap {
      int enable;
      char *ssid;
      char *pass;
      int hidden;
      int channel;
      int max_connections;
      char *ip;
      char *netmask;
      char *gw;
      char *dhcp_start;
      char *dhcp_end;
      int keep_enabled;
    } ap;
  } wifi;
  struct sys_config_device {
    char *id;
    char *password;
  } device;
  struct sys_config_debug {
    char *udp_log_addr;
    int mbedtls_level;
    int level;
    char *filter;
    int stdout_uart;
    int stderr_uart;
    int factory_reset_gpio;
    char *mg_mgr_hexdump_file;
    char *stdout_topic;
    char *stderr_topic;
  } debug;
  struct sys_config_sys {
    int wdt_timeout;
    struct sys_config_sys_atca {
      int enable;
      int i2c_addr;
      int ecdh_slots_mask;
    } atca;
  } sys;
  char *conf_acl;
  struct sys_config_spi {
    int enable;
    int debug;
    int unit_no;
    int miso_gpio;
    int mosi_gpio;
    int sclk_gpio;
    int cs0_gpio;
    int cs1_gpio;
    int cs2_gpio;
  } spi;
  struct sys_config_i2c {
    int enable;
    int freq;
    int debug;
    int sda_gpio;
    int scl_gpio;
  } i2c;
  struct sys_config_mqtt {
    int enable;
    char *server;
    char *client_id;
    char *user;
    char *pass;
    double reconnect_timeout_min;
    double reconnect_timeout_max;
    char *ssl_cert;
    char *ssl_key;
    char *ssl_ca_cert;
    char *ssl_cipher_suites;
    char *ssl_psk_identity;
    char *ssl_psk_key;
    int clean_session;
    int keep_alive;
    char *will_topic;
    char *will_message;
  } mqtt;
  struct sys_config_aws {
    struct sys_config_aws_shadow {
      char *thing_name;
    } shadow;
  } aws;
  struct sys_config_http {
    int enable;
    char *listen_addr;
    char *ssl_cert;
    char *ssl_key;
    char *ssl_ca_cert;
    char *upload_acl;
    char *hidden_files;
    char *auth_domain;
    char *auth_file;
  } http;
  struct sys_config_dns_sd {
    int enable;
    char *host_name;
    char *txt;
    int ttl;
  } dns_sd;
  struct sys_config_gcp {
    int enable;
    char *project;
    char *region;
    char *registry;
    char *device;
    char *key;
    int token_ttl;
  } gcp;
  struct sys_config_mjs {
    int generate_jsc;
  } mjs;
  struct sys_config_rpc {
    int enable;
    int max_frame_size;
    int max_queue_length;
    int default_out_channel_idle_close_timeout;
    struct sys_config_rpc_ws {
      int enable;
      char *server_address;
      int reconnect_interval_min;
      int reconnect_interval_max;
      char *ssl_server_name;
      char *ssl_ca_file;
      char *ssl_client_cert_file;
    } ws;
    struct sys_config_rpc_mqtt {
      int enable;
      int is_trusted;
    } mqtt;
    struct sys_config_rpc_uart {
      int uart_no;
      int baud_rate;
      int fc_type;
      int wait_for_start_frame;
    } uart;
  } rpc;
};

const struct mgos_conf_entry *sys_config_schema();

#endif /* SYS_CONFIG_H_ */
