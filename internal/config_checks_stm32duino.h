#ifndef CONFIG_CHECKS_STM32DUINO_H
#define CONFIG_CHECKS_STM32DUINO_H

#if not IS_STM32DUINO()
#error This header should be included for STM32 (stm32duino.com core), only
#endif

#if !defined(MOZZI_AUDIO_MODE)
#  define MOZZI_AUDIO_MODE MOZZI_OUTPUT_PWM
#endif
MOZZI_CHECK_SUPPORTED(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_EXTERNAL_TIMED, MOZZI_OUTPUT_EXTERNAL_CUSTOM, MOZZI_OUTPUT_PWM, MOZZI_OUTPUT_2PIN_PWM)

#if !defined(MOZZI_AUDIO_RATE)
#  define MOZZI_AUDIO_RATE 32768
#endif

#if MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_PWM, MOZZI_OUTPUT_2PIN_PWM, MOZZI_OUTPUT_EXTERNAL_TIMED)
#  if !defined(MOZZI_AUDIO_UPDATE_TIMER)
#    define MOZZI_AUDIO_UPDATE_TIMER TIM2
#  endif
#endif

#if MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_PWM)
#  if !defined(MOZZI_AUDIO_PIN_1)
#    define MOZZI_AUDIO_PIN_1 PA8
#  endif
#  if (MOZZI_AUDIO_CHANNELS > 1) && !defined(MOZZI_AUDIO_PIN_1)
#    define MOZZI_AUDIO_PIN_2 PA9
#  endif
#  if !defined(MOZZI_AUDIO_BITS)
#    define MOZZI_AUDIO_BITS 10
#  endif
#  define MOZZI_AUDIO_BITS_PER_CHANNEL MOZZI_AUDIO_BITS
#elif MOZZI_IS(MOZZI_AUDIO_MODE, MOZZI_OUTPUT_2PIN_PWM)
#  if !defined(MOZZI_AUDIO_PIN_1)
#    define MOZZI_AUDIO_PIN_1 PA8
#  endif
#  if !defined(MOZZI_AUDIO_PIN_1_LOW)
#    define MOZZI_AUDIO_PIN_1_LOW PA9
#  endif
MOZZI_CHECK_SUPPORTED(MOZZI_AUDIO_CHANNELS, 1)
#  if !defined(MOZZI_AUDIO_PER_CHANNEL)
#    define MOZZI_AUDIO_PER_CHANNEL 7
#  endif
#  define MOZZI_AUDIO_BITS MOZZI_AUDIO_BITS_PER_CHANNEL * 2
#endif

#if !defined(MOZZI_ANALOG_READ)
#define MOZZI_ANALOG_READ MOZZI_ANALOG_READ_STANDARD
#endif


#endif        //  #ifndef CONFIG_CHECKS_STM32DUINO_H