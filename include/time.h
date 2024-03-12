#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <sys/time.h>

typedef void (*time_delay_callback_t)(void* arg);

int64_t time_current_us();
void time_delay_callback(char* name, int64_t* start, bool start_condition,
                         bool cancel_condition, int64_t end,
                         time_delay_callback_t callback, void* arg);