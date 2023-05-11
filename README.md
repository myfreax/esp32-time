# ESP32 Time Component
Component used for collect time unit tool

## Usage
```
git submodule add git@github.com:myfreax/esp32-time.git components/time
```
```c
void app_main(void) {
  struct timeval tv_now;
  int64_t time_us = time_currnet_us(&tv_now);
}
```