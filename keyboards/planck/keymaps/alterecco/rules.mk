MAKEFLAGS += --output-sync -j8

MIDI_ENABLE = no            # MIDI controls
AUDIO_ENABLE = no           # Audio output on port C6
COMMAND_ENABLE = no         # Commands for debug and configuration
CONSOLE_ENABLE = no         # Console for debug(+400)
UNICODE_ENABLE = no         # Unicode
EXTRAKEY_ENABLE = no        # Audio control and System control(+450)
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration(+1000)
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
TAP_DANCE_ENABLE = no       # xxx
SWAP_HANDS_ENABLE = no      # Enable one-hand typing

NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
RGB_MATRIX_ENABLE = yes     # xxx

SRC += post_init.c
