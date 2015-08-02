/*
  laser_control.h - partner to spidle_control that modulates PWM to drive
  a laser cutter by treating the Z axis as a power level.

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

#ifndef laser_control_h
#define laser_control_h

//adjust the laser power based on the step position
void laser_power_adjust(int32_t *steps);

#endif
