// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "Raspberry Pi Pico"
#define MICROPY_HW_FLASH_STORAGE_BYTES          (1408 * 1024)

#if MICROPY_PY_NETWORK_CYW43
#include "enable_cyw43.h"
#define CYW43_PIN_WL_DYNAMIC 1
#define CYW43_PIO_CLOCK_DIV_DYNAMIC 1
#endif
