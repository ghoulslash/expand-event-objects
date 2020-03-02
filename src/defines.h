#pragma once
#include "../include/global.h"
#include "../include/global.fieldmap.h"
#include "../include/sprite.h"

#define gSaveBlock1Ptr ((struct SaveBlock1*) *((u32*) 0x3005008))


// NEW STUFF
//#define EVENT_OBJECTS_COUNT_1 16
#define EVENT_OBJECTS_COUNT_2 14
#define EVENT_OBJECTS_COUNT EVENT_OBJECTS_COUNT_1 + EVENT_OBJECTS_COUNT_2	//30

//structs
struct ViewportObject
{
    u16 eventObjId;
    s16 x;
    s16 y;
    s16 animNum;
}; /* size = 8 bytes */

// repointed ram (match ./ram_repoints)
#define gMovementScripts 0x203e108
#define gEventObjects ((struct EventObject*) 0x203e180)
#define sViewportObjectEvents ((struct ViewportObject*) 0x203e5b8)
// new save ram
#define gNewEventObjects ((struct EventObject*) 0x203c000)
