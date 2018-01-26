// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// This work is free software released under the GNU General Public License
// version 2.0, and comes with ABSOLUTELY NO WARRANTY.
//
// See LICENSE and AUTHORS for more information.

#pragma once

extern Inventory_t treasure_list[LEVEL_MAX_OBJECTS];

// Converted to uint16_t when saving the game.
extern int16_t missiles_counter;

void magicTreasureMagicalAbility(int item_id, int level);