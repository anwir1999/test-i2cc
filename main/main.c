#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "cJSON.h"
#include "../i2c_lib/sensor.h"


void app_main(void)
{
	i2c_master_init();
	acc_config(60, 2);
	gpio_init();
}
