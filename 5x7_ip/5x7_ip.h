// Copyright 2022 Ivan Pimchenko (i.pimchenko@gmail.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_5x7_ip( \
    L11, L12, L13, L14, L15, L16, L17,     R11, R12, R13, R14, R15, R16, R17,   \
    L21, L22, L23, L24, L25, L26, L27,     R21, R22, R23, R24, R25, R26, R27,   \
    L31, L32, L33, L34, L35, L36, L37,     R31, R32, R33, R34, R35, R36, R37,   \
    L41, L42, L43, L44, L45, L46, L47,     R41, R42, R43, R44, R45, R46, R47,   \
                   L54, L55,                         R53, R54,                  \
                             L56, L57,     R51, R52,                            \
                             L66, L67,     R61, R62,                            \
                             L64, L65,     R63, R64                             \
) { \
  { L11, L12, L13, L14, L15, L16, L17 },                                        \
  { L21, L22, L23, L24, L25, L26, L27 },                                        \
  { L31, L32, L33, L34, L35, L36, L37 },                                        \
  { L41, L42, L43, L44, L45, L46, L47 },                                        \
  { XXX, XXX, XXX, L54, L55, L56, L57 },                                        \
  { XXX, XXX, XXX, L64, L65, L66, L67 },                                        \
\
                                         { R11, R12, R13, R14, R15, R16, R17 }, \
                                         { R21, R22, R23, R24, R25, R26, R27 }, \
                                         { R31, R32, R33, R34, R35, R36, R37 }, \
                                         { R41, R42, R43, R44, R45, R46, R47 }, \
                                         { R51, R52, R53, R54, XXX, XXX, XXX }, \
                                         { R61, R62, R63, R64, XXX, XXX, XXX }  \
}
