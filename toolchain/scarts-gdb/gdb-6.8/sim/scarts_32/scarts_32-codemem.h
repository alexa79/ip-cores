/* SCARTS (32-bit) target-dependent code for the GNU simulator.
   Copyright 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003
   Free Software Foundation, Inc.
   Contributed by Martin Walter <mwalter@opencores.org>

   This file is part of the GNU simulators.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */


#ifndef __SCARTS_32_CODEMEM_H__
#define __SCARTS_32_CODEMEM_H__

#include <inttypes.h>

typedef int (*scarts_codemem_read_fptr_t)  (uint32_t addr, uint16_t *value);
typedef int (*scarts_codemem_write_fptr_t) (uint32_t addr, uint16_t value);

extern int scarts_codemem_read  (uint32_t addr, uint16_t *value);
extern int scarts_codemem_write (uint32_t addr, uint16_t  value);

#endif
