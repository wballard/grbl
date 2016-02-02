/*
  defaults_ballscrew.h -
  Theses defaults are set up for 1605/1610 based ballscrew systems driven by NEMA 23
  type motors on large format tables.
*/

#ifndef defaults_h
#define defaults_h
  #define DEFAULT_SPINDLE_RPM_MAX 24000.0
  #define DEFAULT_SPINDLE_RPM_MIN 0.0
  #define ENABLE_M7
  #define MICROSTEPS_XY 4
  #define STEP_REVS_XY 200
  #define MM_PER_REV_XY (10)
  #define MICROSTEPS_Z 4
  #define STEP_REVS_Z 200
  #define MM_PER_REV_Z (5)
  #define DEFAULT_X_STEPS_PER_MM (MICROSTEPS_XY*STEP_REVS_XY/MM_PER_REV_XY)
  #define DEFAULT_Y_STEPS_PER_MM (MICROSTEPS_XY*STEP_REVS_XY/MM_PER_REV_XY)
  #define DEFAULT_Z_STEPS_PER_MM (MICROSTEPS_Z*STEP_REVS_Z/MM_PER_REV_Z)
  #define DEFAULT_X_MAX_RATE 6000.0
  #define DEFAULT_Y_MAX_RATE 6000.0
  #define DEFAULT_Z_MAX_RATE 6000.0
  #define DEFAULT_X_ACCELERATION (600.0*60*60)
  #define DEFAULT_Y_ACCELERATION (600.0*60*60)
  #define DEFAULT_Z_ACCELERATION (600.0*60*60)
  #define DEFAULT_X_MAX_TRAVEL 1240.0 // mm
  #define DEFAULT_Y_MAX_TRAVEL 2060.0 // mm
  #define DEFAULT_Z_MAX_TRAVEL 260.0 // mm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 20
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK ((0<<X_AXIS)|(0<<Z_AXIS)|(0<<Y_AXIS))
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 255 // All enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.02 // mm
  #define DEFAULT_ARC_TOLERANCE 0.01 // mm
  #define DEFAULT_REPORT_INCHES 0
  #define DEFAULT_INVERT_ST_ENABLE 1
  #define ENABLE_SOFTWARE_DEBOUNCE
  #define DEFAULT_INVERT_LIMIT_PINS 0
  #define DEFAULT_SOFT_LIMIT_ENABLE 0
  #define DEFAULT_HARD_LIMIT_ENABLE 1
  //home X,Y with an offset to have a consistent set 0 inside the limit switches
  #define DEFAULT_HOMING_ENABLE 1
  #define DEFAULT_HOMING_DIR_MASK ((1<<X_AXIS)|(1<<Y_AXIS))
  #define DEFAULT_HOMING_FEED_RATE DEFAULT_Y_MAX_RATE / 2.0
  #define DEFAULT_HOMING_SEEK_RATE DEFAULT_Y_MAX_RATE / 4.0
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 25 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 15.0 // mm
  #undef  HOMING_CYCLE_0
  #define HOMING_CYCLE_0 (1<<X_AXIS)
  #undef  HOMING_CYCLE_1
  #define HOMING_CYCLE_1 (1<<Y_AXIS)
  #undef  HOMING_INIT_LOCK
#endif
