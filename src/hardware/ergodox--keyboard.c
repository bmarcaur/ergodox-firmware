/* ----------------------------------------------------------------------------
 * ergoDOX keyboard specific stuff
 * - public things are prefixed by `kb_` or `KB_`
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak
 * Released under The MIT License (MIT) (see "license.md") at
 * <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~ documentation ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* ----------------------------------------------------------------------------
 * Matrix [row.column] assignments
 * - row and column numbers are in hex
 * - coordinates without brackets are unused
 * - left and right hands are mirrored, with `row += 6` for left hand rows
 * ----------------------------------------------------------------------------
 * .......           rows x columns = positions;  assigned,  unassigned .......
 * ....... per hand:    6 x 7       = 42;         38,        4          .......
 * .......    total:   12 x 7       = 84;         76,        8          .......
 * ----------------------------------------------------------------------------
 * [66][65][64][63][62][61][60]                [00][01][02][03][04][05][06]
 * [76][75][74][73][72][71][70]                [10][11][12][13][14][15][16]
 * [86][85][84][83][82][81] 80                  20 [21][22][23][24][25][26]
 * [96][95][94][93][92][91][90]                [30][31][32][33][34][35][36]
 * [A6][A5][A4][A3][A2] A1  A0                  40  41 [42][43][44][45][46]
 *                       [B1]     B0      50     [51]
 *                       [B3]    [B2]    [52]    [53]
 *                       [B6][B5][B4]    [54][55][56]
 * ------------------------------------------------------------------------- */


#include "ergodox.h"


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~ macros ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

// TODO


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~ variables ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

uint8_t kb_is_pressed[KB_ROWS][KB_COLUMNS] = {
// --- right hand ---
// column 0    1    2    3    4    5    6
	  0,   0,   0,   0,   0,   0,   0, //row 0x0
	  0,   0,   0,   0,   0,   0,   0, //row 0x1
	  0,   0,   0,   0,   0,   0,   0, //row 0x2
	  0,   0,   0,   0,   0,   0,   0, //row 0x3
	  0,   0,   0,   0,   0,   0,   0, //row 0x4
	  0,   0,   0,   0,   0,   0,   0, //row 0x5
// --- left hand ---
// column 0    1    2    3    4    5    6
	  0,   0,   0,   0,   0,   0,   0, //row 0x6
	  0,   0,   0,   0,   0,   0,   0, //row 0x7
	  0,   0,   0,   0,   0,   0,   0, //row 0x8
	  0,   0,   0,   0,   0,   0,   0, //row 0x9
	  0,   0,   0,   0,   0,   0,   0, //row 0xA
	  0,   0,   0,   0,   0,   0,   0, //row 0xB
}

// TODO: this belongs in program space
uint8_t kb_maps[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// ------- layer: default -------
// --- right hand ---
// column 0    1    2    3    4    5    6
	  0,   0,   0,   0,   0,   0,   0, //row 0x0
	  0,   0,   0,   0,   0,   0,   0, //row 0x1
	  0,   0,   0,   0,   0,   0,   0, //row 0x2
	  0,   0,   0,   0,   0,   0,   0, //row 0x3
	  0,   0,   0,   0,   0,   0,   0, //row 0x4
	  0,   0,   0,   0,   0,   0,   0, //row 0x5
// --- left hand ---
// column 0    1    2    3    4    5    6
	  0,   0,   0,   0,   0,   0,   0, //row 0x6
	  0,   0,   0,   0,   0,   0,   0, //row 0x7
	  0,   0,   0,   0,   0,   0,   0, //row 0x8
	  0,   0,   0,   0,   0,   0,   0, //row 0x9
	  0,   0,   0,   0,   0,   0,   0, //row 0xA
	  0,   0,   0,   0,   0,   0,   0, //row 0xB
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~ functions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

// TODO
void kb_init() {
}

// TODO
// - cycle through row=HIGH and read each column
void kb_update() {
}

