#include "defines.h"

//////////////////////////
// hook at 0804C270 via r0
void SaveEventObjects(void)
{
    int i;

    for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
	{
		if (i < EVENT_OBJECTS_COUNT_1)
			gSaveBlock1Ptr->eventObjects[i] = gEventObjects[i];
		else
			gNewEventObjects[i - EVENT_OBJECTS_COUNT_1] = gEventObjects[i];
	}
}


//////////////////////////
// hook at 0804C2B8 via r0
void LoadEventObjects(void)
{
    int i;

    for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
	{
		if (i < EVENT_OBJECTS_COUNT_1)
			gEventObjects[i] = gSaveBlock1Ptr->eventObjects[i];
		else
			gEventObjects[i] = gNewEventObjects[i - EVENT_OBJECTS_COUNT_1];
	}
}



