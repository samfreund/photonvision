/*
 * Copyright (C) Photon Vision.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <wpi/print.h>

#define CHECK_PTR(ptr)                                               \
  if (!ptr) {                                                        \
    wpi::println("Got invalid pointer?? {}:{}", __FILE__, __LINE__); \
    return;                                                          \
  }
#define CHECK_PTR_RETURN(ptr, default)                               \
  if (!ptr) {                                                        \
    wpi::println("Got invalid pointer?? {}:{}", __FILE__, __LINE__); \
    return default;                                                  \
  }
