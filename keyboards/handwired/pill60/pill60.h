 /* Copyright 2020 Imam Rafii 
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */
#pragma once

#include "quantum.h"

/*   LAYOUT
  ENCODER
  ESC| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | =  |BCKS | DEL  
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | [  | ]  |     \    
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  | '  |    ENTER 
  LSHFT| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | /  |   RSHIF | FN 
  LCT| WIN| ALT|               ESPACE             | ALT| WIN | MN| RCT| 
*/


#define LAYOUT( \
    k00, k01, k02, k03, k04, \
    k10, k11, k12, k13, k14, \
    k20, k21, k22, k23, k24, \
    k30, k31, k32, k33, k34, \
    k40, k41, k42, k43, k44, \
    k50, k51, k52, k53, k54, \
    k60, k61, k62, k63, k64, \
    k70, k71, k72, k73, k74, \
    k80, k81, k82, k83, k84, \
    k90, k91, k92, k93, k94  \
) { \
    { k00, k01, k02, k03, k04 }, \
    { k10, k11, k12, k13, k14 }, \
    { k20, k21, k22, k23, k24 }, \
    { k30, k31, k32, k33, k34 }, \
    { k40, k41, k42, k43, k44 }, \
    { k50, k51, k52, k53, k54 }, \
    { k60, k61, k62, k63, k64 }, \
    { k70, k71, k72, k73, k74 }, \
    { k80, k81, k82, k83, k84 }, \
    { k90, k91, k92, k93, k94 } \
}




