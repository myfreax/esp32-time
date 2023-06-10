# ESP32 Time Component

Component used for collect time unit tool

## Usage

```
git submodule add git@github.com:myfreax/esp32-time.git components/time
```

```c
void app_main(void) {
  int64_t time_us = time_currnet_us();
}
```

## Example

The [ESP32 Example Project](https://github.com/myfreax/esp32-example-project) demonstrates how to use IDF framework build application of reusable component
