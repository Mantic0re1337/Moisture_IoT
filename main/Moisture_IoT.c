/* Scan Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

/*
    This example shows how to scan for available set of APs.
*/
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "regex.h"
#include "driver/gpio.h"

#define BLINK_LED 5

void app_main(void)
{
    gpio_reset_pin(BLINK_LED);
    gpio_set_direction(BLINK_LED, GPIO_MODE_OUTPUT);
    
    gpio_set_level(BLINK_LED, 1);
}
