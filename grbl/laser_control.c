/*
  laser_control.c - laser control methods
  Part of Grbl

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "grbl.h"

void laser_power_adjust(int32_t *steps)
{
  //index the power level based on the supplied spindle RPM, effectively
  //ignoring RPM and treating is just as a range
  float zPosition = system_convert_axis_steps_to_mpos(steps, Z_AXIS);
  //this is not switching the spindle on or off, but instead modulating the
  //power level -- the spindle must be previously running
  if (sys.spindle_state != SPINDLE_DISABLE) {
    if (zPosition > 0) {
      spindle_set_state(SPINDLE_ENABLE_CW, 0.0);
    } else {
      #define SPINDLE_RPM_RANGE (SPINDLE_MAX_RPM-SPINDLE_MIN_RPM)
      //scale Z axis [0..-1] to RPM, clip the lower range so this is
      //effectively a percentage multiplication against the spindle range
      float scaled_rpm = max(-1.0, zPosition) * -1.0 * SPINDLE_RPM_RANGE;
      spindle_set_state(SPINDLE_ENABLE_CW, scaled_rpm);
    }
  }
}
