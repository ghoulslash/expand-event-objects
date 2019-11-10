#include "defines.h"


// File Functions
//void TrySpawnEventObjects(s16 cameraX, s16 cameraY);
//u8 TrySpawnEventObjectTemplate(struct EventObjectTemplate *eventObjectTemplate, u8 mapNum, u8 mapGroup, s16 cameraX, s16 cameraY);


/*
//////////////////////////
// hook at
u8 TrySpawnEventObjectTemplate(struct EventObjectTemplate *eventObjectTemplate, u8 mapNum, u8 mapGroup, s16 cameraX, s16 cameraY)
{
    u8 eventObjectId;
    struct SpriteTemplate spriteTemplate;
    struct SpriteFrameImage spriteFrameImage;
    const struct EventObjectGraphicsInfo *graphicsInfo;
    const struct SubspriteTable *subspriteTables = NULL;

    graphicsInfo = GetEventObjectGraphicsInfo(eventObjectTemplate->graphicsId);
    MakeObjectTemplateFromEventObjectTemplate(eventObjectTemplate, &spriteTemplate, &subspriteTables);
    spriteFrameImage.size = graphicsInfo->size;
    spriteTemplate.images = &spriteFrameImage;
    eventObjectId = TrySetupEventObjectSprite(eventObjectTemplate, &spriteTemplate, mapNum, mapGroup, cameraX, cameraY);
    if (eventObjectId == EVENT_OBJECTS_COUNT)
        return EVENT_OBJECTS_COUNT;

    gSprites[gEventObjects[eventObjectId].spriteId].images = graphicsInfo->images;
    if (subspriteTables)
        SetSubspriteTables(&gSprites[gEventObjects[eventObjectId].spriteId], subspriteTables);

    return eventObjectId;
}

//////////////////////////
// hook at 0805EC30 via r2
void TrySpawnEventObjects(s16 cameraX, s16 cameraY)
{
    u8 i;
    u8 objectCount;

    if (gMapHeader.events != NULL)
    {
        s16 left = gSaveBlock1Ptr->pos.x - 2;
        s16 right = gSaveBlock1Ptr->pos.x + 17;
        s16 top = gSaveBlock1Ptr->pos.y;
        s16 bottom = gSaveBlock1Ptr->pos.y + 16;

		objectCount = gMapHeader.events->eventObjectCount;

        for (i = 0; i < objectCount; i++)
        {
            struct EventObjectTemplate *template = &gSaveBlock1Ptr->eventObjectTemplates[i];
            s16 npcX = template->x + 7;
            s16 npcY = template->y + 7;

            if (top <= npcY && bottom >= npcY && left <= npcX && right >= npcX && !FlagGet(template->flagId))
                TrySpawnEventObjectTemplate(template, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, cameraX, cameraY);
        }
    }
}
*/


//////////////////////////
// hook at 0804C270 via r0
void SaveEventObjects(void)
{
    int i;

    for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
	{
		if (i <= EVENT_OBJECTS_COUNT_1)
			gSaveBlock1Ptr->eventObjects[i] = gEventObjects[i];
		else
			gSaveBlock1Ptr->eventObjects2[i-EVENT_OBJECTS_COUNT_1-1] = gEventObjects[i];
	}
    //for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
    //    gSaveBlock1Ptr->eventObjects[i] = gEventObjects[i];
}


//////////////////////////
// hook at 0804C2B8 via r0
void LoadEventObjects(void)
{
    int i;

    for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
	{
		if (i <= EVENT_OBJECTS_COUNT_1)
			gEventObjects[i] = gSaveBlock1Ptr->eventObjects[i];
		else
			gEventObjects[i] = gSaveBlock1Ptr->eventObjects2[i-EVENT_OBJECTS_COUNT_1-1];
	}
	
   // for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
   //     gEventObjects[i] = gSaveBlock1Ptr->eventObjects[i];
}



