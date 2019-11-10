#include "../include/global.h"
#include "../include/global.fieldmap.h"

//#include "../include/event_object_movement.h"
#include "../include/sprite.h"


#define gMovementScripts 0x203C000
#define gEventObjects ((struct EventObject*) 0x203C078)
#define gSaveBlock1Ptr ((struct SaveBlock1*) *((u32*) 0x3005008))
