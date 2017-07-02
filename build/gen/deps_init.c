#include <stdbool.h>
#include <stdio.h>

#include "common/cs_dbg.h"

#include "fw/src/mgos_app.h"


extern bool mgos_arduino_adafruit_gfx_init(void);
extern bool mgos_arduino_compat_init(void);
extern bool mgos_spi_init(void);
extern bool mgos_arduino_spi_init(void);
extern bool mgos_i2c_init(void);
extern bool mgos_arduino_wire_init(void);
extern bool mgos_arduino_adafruit_ssd1306_init(void);
extern bool mgos_atca_init(void);
extern bool mgos_mqtt_init(void);
extern bool mgos_aws_init(void);
extern bool mgos_http_server_init(void);
extern bool mgos_dns_sd_init(void);
extern bool mgos_gcp_init(void);
extern bool mgos_mjs_init(void);
extern bool mgos_ota_http_client_init(void);
extern bool mgos_ota_http_server_init(void);
extern bool mgos_rpc_common_init(void);
extern bool mgos_rpc_loopback_init(void);
extern bool mgos_rpc_mqtt_init(void);
extern bool mgos_rpc_service_atca_init(void);
extern bool mgos_rpc_service_config_init(void);
extern bool mgos_rpc_service_fs_init(void);
extern bool mgos_rpc_service_gpio_init(void);
extern bool mgos_rpc_service_i2c_init(void);
extern bool mgos_rpc_service_ota_init(void);
extern bool mgos_rpc_uart_init(void);
extern bool mgos_vfs_dev_spi_flash_init(void);

static const struct lib_descr {
  const char *title;
  bool (*init)(void);
} descrs[] = {

  // "arduino_adafruit_gfx". deps: [ ]
  {
    .title = "arduino_adafruit_gfx",
    .init = mgos_arduino_adafruit_gfx_init,
  },

  // "arduino_compat". deps: [ ]
  {
    .title = "arduino_compat",
    .init = mgos_arduino_compat_init,
  },

  // "spi". deps: [ ]
  {
    .title = "spi",
    .init = mgos_spi_init,
  },

  // "arduino_spi". deps: [ "arduino-compat" "spi" ]
  {
    .title = "arduino_spi",
    .init = mgos_arduino_spi_init,
  },

  // "i2c". deps: [ ]
  {
    .title = "i2c",
    .init = mgos_i2c_init,
  },

  // "arduino_wire". deps: [ "arduino-compat" "i2c" ]
  {
    .title = "arduino_wire",
    .init = mgos_arduino_wire_init,
  },

  // "arduino_adafruit_ssd1306". deps: [ "arduino-adafruit-gfx" "arduino-compat" "arduino-spi" "arduino-wire" ]
  {
    .title = "arduino_adafruit_ssd1306",
    .init = mgos_arduino_adafruit_ssd1306_init,
  },

  // "atca". deps: [ "i2c" ]
  {
    .title = "atca",
    .init = mgos_atca_init,
  },

  // "mqtt". deps: [ ]
  {
    .title = "mqtt",
    .init = mgos_mqtt_init,
  },

  // "aws". deps: [ "mqtt" ]
  {
    .title = "aws",
    .init = mgos_aws_init,
  },

  // "http_server". deps: [ "atca" ]
  {
    .title = "http_server",
    .init = mgos_http_server_init,
  },

  // "dns_sd". deps: [ "http-server" ]
  {
    .title = "dns_sd",
    .init = mgos_dns_sd_init,
  },

  // "gcp". deps: [ "mqtt" ]
  {
    .title = "gcp",
    .init = mgos_gcp_init,
  },

  // "mjs". deps: [ ]
  {
    .title = "mjs",
    .init = mgos_mjs_init,
  },

  // "ota_http_client". deps: [ ]
  {
    .title = "ota_http_client",
    .init = mgos_ota_http_client_init,
  },

  // "ota_http_server". deps: [ "http-server" "ota-http-client" ]
  {
    .title = "ota_http_server",
    .init = mgos_ota_http_server_init,
  },

  // "rpc_common". deps: [ "http-server" ]
  {
    .title = "rpc_common",
    .init = mgos_rpc_common_init,
  },

  // "rpc_loopback". deps: [ "rpc-common" ]
  {
    .title = "rpc_loopback",
    .init = mgos_rpc_loopback_init,
  },

  // "rpc_mqtt". deps: [ "mqtt" "rpc-common" ]
  {
    .title = "rpc_mqtt",
    .init = mgos_rpc_mqtt_init,
  },

  // "rpc_service_atca". deps: [ "atca" "rpc-common" ]
  {
    .title = "rpc_service_atca",
    .init = mgos_rpc_service_atca_init,
  },

  // "rpc_service_config". deps: [ "rpc-common" ]
  {
    .title = "rpc_service_config",
    .init = mgos_rpc_service_config_init,
  },

  // "rpc_service_fs". deps: [ "rpc-common" ]
  {
    .title = "rpc_service_fs",
    .init = mgos_rpc_service_fs_init,
  },

  // "rpc_service_gpio". deps: [ "rpc-common" ]
  {
    .title = "rpc_service_gpio",
    .init = mgos_rpc_service_gpio_init,
  },

  // "rpc_service_i2c". deps: [ "i2c" "rpc-common" ]
  {
    .title = "rpc_service_i2c",
    .init = mgos_rpc_service_i2c_init,
  },

  // "rpc_service_ota". deps: [ "ota-http-client" "rpc-common" ]
  {
    .title = "rpc_service_ota",
    .init = mgos_rpc_service_ota_init,
  },

  // "rpc_uart". deps: [ "rpc-common" ]
  {
    .title = "rpc_uart",
    .init = mgos_rpc_uart_init,
  },

  // "vfs_dev_spi_flash". deps: [ "spi" ]
  {
    .title = "vfs_dev_spi_flash",
    .init = mgos_vfs_dev_spi_flash_init,
  },

};

bool mgos_deps_init(void) {
  size_t i;
  for (i = 0; i < sizeof(descrs) / sizeof(struct lib_descr); i++) {
    LOG(LL_DEBUG, ("init %s...", descrs[i].title));
    if (!descrs[i].init()) {
      LOG(LL_ERROR, ("%s init failed", descrs[i].title));
      return false;
    }
  }

  return true;
}
