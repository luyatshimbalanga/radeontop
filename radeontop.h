/*
	Copyright (C) 2012 Lauri Kasanen

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef RADEONTOP_H
#define RADEONTOP_H

#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// radeontop.c
void die(const char *why);

extern void *area;

// detect.c
unsigned int init_pci();

// chips
enum radeon_family {
	UNKNOWN_CHIP,
	R600,
	RV610,
	RV630,
	RV670,
	RV620,
	RV635,
	RS780,
	RS880,
	RV770,
	RV730,
	RV710,
	RV740,
	CEDAR,
	REDWOOD,
	JUNIPER,
	CYPRESS,
	HEMLOCK,
	PALM,
	SUMO,
	SUMO2,
	BARTS,
	TURKS,
	CAICOS,
	CAYMAN,
	ARUBA,
	TAHITI,
	PITCAIRN,
	VERDE,
};

#define str(a) #a

const char * const family_str[] = {
	str(UNKNOWN_CHIP),
	str(R600),
	str(RV610),
	str(RV630),
	str(RV670),
	str(RV620),
	str(RV635),
	str(RS780),
	str(RS880),
	str(RV770),
	str(RV730),
	str(RV710),
	str(RV740),
	str(CEDAR),
	str(REDWOOD),
	str(JUNIPER),
	str(CYPRESS),
	str(HEMLOCK),
	str(PALM),
	str(SUMO),
	str(SUMO2),
	str(BARTS),
	str(TURKS),
	str(CAICOS),
	str(CAYMAN),
	str(ARUBA),
	str(TAHITI),
	str(PITCAIRN),
	str(VERDE),
};

#endif