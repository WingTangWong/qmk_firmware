# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

SPLIT_KEYBOARD = yes
SPLIT_TRANSPORT = serial

SERIAL_DRIVER  = usart
CONSOLE_ENABLE =yes
COMMAND_ENABLE =yes

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = yes # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work

NKRO_ENABLE = yes           # USB Nkey Rollover

OLED_ENABLE = yes
OLED_DRIVER = SSD1306

ENCODER_ENABLE = yes

RGBLIGHT_ENABLE = yes
WS2812_DRIVER = bitbang

BACKLIGHT_DRIVER = software
BACKLIGHT_ENABLE = yes
