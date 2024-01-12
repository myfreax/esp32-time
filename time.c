#include "time.h"

#include "esp_log.h"
static const char* TAG = "TIME";

int64_t time_currnet_us() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  int64_t time_us = (int64_t)tv.tv_sec * 1000000L + (int64_t)tv.tv_usec;
  return time_us;
}

void time_delay_callback(char* name, int64_t* start, bool start_condition,
                         bool cancel_condition, int64_t end,
                         time_delay_callback_t callback, void* arg) {
  if (start_condition && *start == 0) {
    ESP_LOGI(TAG, "Start %s Timing", name);
    *start = time_currnet_us();
  }

  if (start_condition && (time_currnet_us() - *start) > end) {
    ESP_LOGI(TAG, "%s Timing End", name);
    callback(arg);
    *start = 0;
  }

  if (cancel_condition && *start != 0) {
    ESP_LOGI(TAG, "Cancel %s Timing", name);
    *start = 0;
  }
}