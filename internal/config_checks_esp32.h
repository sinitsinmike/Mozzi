#ifndef CONFIG_CHECK_ESP32_H
#define CONFIG_CHECK_ESP32_H

#if not IS_ESP32()
#error This header should be included for ESP32 architecture, only
#endif

#if !defined(MOZZI_AUDIO_MODE)
#define MOZZI_AUDIO_MODE MOZZI_OUTPUT_INTERNAL_DAC
#endif
MOZZI_CHECK_SUPPORTED(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_EXTERNAL_TIMED, MOZZI_OUTPUT_EXTERNAL_CUSTOM, MOZZI_OUTPUT_PDM_VIA_I2S, MOZZI_OUTPUT_I2S_DAC, MOZZI_OUTPUT_INTERNAL_DAC)

#if !defined(MOZZI_AUDIO_RATE)
#define MOZZI_AUDIO_RATE 32768
#endif

#if defined(MOZZI_PWM_RATE)
#error Configuration of MOZZI_PWM_RATE is not currently supported on this platform (always same as AUDIO_RATE)
#endif

#if !defined(MOZZI_ANALOG_READ)
#  define MOZZI_ANALOG_READ MOZZI_ANALOG_READ_NONE
#endif

MOZZI_CHECK_SUPPORTED(MOZZI_ANALOG_READ, MOZZI_ANALOG_READ_NONE)
MOZZI_CHECK_SUPPORTED(MOZZI_AUDIO_INPUT, MOZZI_AUDIO_INPUT_NONE)

#if MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_I2S_DAC, MOZZI_OUTPUT_PDM_VIA_I2S)
#  if !defined(MOZZI_I2S_PIN_BCK)
#    define MOZZI_I2S_PIN_BCK 26
#  endif
#  if !defined(MOZZI_I2S_PIN_WS)
#    define MOZZI_I2S_PIN_WS 25
#  endif
#  if !defined(MOZZI_I2S_PIN_DATA)
#    define MOZZI_I2S_PIN_DATA 33
#  endif
#endif

#if MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_INTERNAL_DAC, MOZZI_OUTPUT_I2S_DAC, MOZZI_OUTPUT_PDM_VIA_I2S)
#  include <driver/i2s.h>
#  if !defined(MOZZI_IS2_PORT)
#    define MOZZI_I2S_PORT I2S_NUM_0
#  endif
#endif

#if !defined(MOZZI_AUDIO_BITS)
#  if MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_INTERNAL_DAC)
#    define MOZZI_AUDIO_BITS 8
#  else
#    define MOZZI_AUDIO_BITS 16
#  endif
#endif

#if MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_PDM_VIA_I2S)
#  if !defined(MOZZI_PDM_RESOLUTION)
#    define MOZZI_PDM_RESOLUTION 8
#  endif
#else
#  define MOZZI_PDM_RESOLUTION 1  // unconditionally, no other value allowed
#endif

// All modes besides timed external bypass the output buffer!
#if !MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_EXTERNAL_TIMED)
#  define BYPASS_MOZZI_OUTPUT_BUFFER true
#endif

#endif        //  #ifndef CONFIG_CHECK_ESP32_H