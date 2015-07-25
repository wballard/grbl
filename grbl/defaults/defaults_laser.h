/*
  defaults_laser.h -
  default settings for a belt driven CO2 tube laser cutter
  with a modified Z axis laser intensity control where Z
  >0 is laser-off and the laser intensity is indexed from 0 to
  full power at -1.0mm

  Min/Max RPM are mapped through to the Z position
*/

#ifndef defaults_h
#define defaults_h
  #define MICROSTEPS_XY 8
  #define STEP_REVS_XY 200
  #define MM_PER_REV_XY (40)
  #define MICROSTEPS_Z 8
  #define STEP_REVS_Z 200
  #define MM_PER_REV_Z (40)
  #define DEFAULT_X_STEPS_PER_MM (MICROSTEPS_XY*STEP_REVS_XY/MM_PER_REV_XY)
  #define DEFAULT_Y_STEPS_PER_MM (MICROSTEPS_XY*STEP_REVS_XY/MM_PER_REV_XY)
  #define DEFAULT_Z_STEPS_PER_MM (MICROSTEPS_Z*STEP_REVS_Z/MM_PER_REV_Z)
  #define DEFAULT_X_MAX_RATE 5000.0
  #define DEFAULT_Y_MAX_RATE 5000.0
  #define DEFAULT_Z_MAX_RATE 10000.0
  #define DEFAULT_X_ACCELERATION (20.0*60*60)
  #define DEFAULT_Y_ACCELERATION (20.0*60*60)
  #define DEFAULT_Z_ACCELERATION (20.0*60*60)
  #define DEFAULT_X_MAX_TRAVEL 1200.0 // mm
  #define DEFAULT_Y_MAX_TRAVEL 800.0 // mm
  #define DEFAULT_Z_MAX_TRAVEL 100.0 // mm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 20
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK ((0<<X_AXIS)|(0<<Z_AXIS)|(1<<Y_AXIS))
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 255 // All enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.02 // mm
  #define DEFAULT_ARC_TOLERANCE 0.01 // mm
  #define DEFAULT_REPORT_INCHES 0
  #define DEFAULT_INVERT_ST_ENABLE 0
  #define ENABLE_SOFTWARE_DEBOUNCE
  #define DEFAULT_INVERT_LIMIT_PINS 0
  #define DEFAULT_SOFT_LIMIT_ENABLE 0
  #define DEFAULT_HARD_LIMIT_ENABLE 1
  //home X,Y with an offset to have a consistent set 0 inside the limit switches
  #define DEFAULT_HOMING_ENABLE 1
  #define DEFAULT_HOMING_DIR_MASK ((1<<X_AXIS)|(1<<Y_AXIS))
  #define DEFAULT_HOMING_FEED_RATE 1500.0
  #define DEFAULT_HOMING_SEEK_RATE 1500.0
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 25 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 10.0 // mm
  #define HOMING_FORCE_SET_ORIGIN
  #define HOMING_FORCE_SET_ORIGIN_X 0.0
  #define HOMING_FORCE_SET_ORIGIN_Y 0.0
  #undef  HOMING_CYCLE_0
  #define HOMING_CYCLE_0 ((1<<X_AXIS)|(1<<Y_AXIS))  // OPTIONAL: Then move X,Y at the same time
  #undef  HOMING_CYCLE_1
  #undef  HOMING_INIT_LOCK
#endif
