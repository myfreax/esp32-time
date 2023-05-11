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
## Example
The [ESP32 Example Project](https://github.com/myfreax/esp32-example-project) demonstrates how to use IDF framework build application of reusable component