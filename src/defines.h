#pragma once
#include "../include/global.h"
#include "../include/global.fieldmap.h"
#include "../include/sprite.h"

#define gSaveBlock1Ptr ((struct SaveBlock1*) *((u32*) 0x3005008))


// NEW STUFF
//#define EVENT_OBJECTS_COUNT_1 16
#define EVENT_OBJECTS_COUNT_2 14
#define EVENT_OBJECTS_COUNT EVENT_OBJECTS_COUNT_1 + EVENT_OBJECTS_COUNT_2	//30

/*
//structs
struct ViewportObject
{
    s16 eventObjId;
    s16 x;
    s16 y;
    s16 animNum;
}; */

// repointed ram (match ./ram_repoints)
#define gMovementScripts 0x203e108
#define gEventObjects ((struct EventObject*) 0x203e180)
//#define gViewportEventObjects ((struct ViewportObject*) (0x203C200))  //ignore
// new save ram
#define gNewEventObjects ((struct EventObject*) 0x203c000)

