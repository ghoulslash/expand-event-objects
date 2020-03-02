#include "defines.h"
#include "../include/field_player_avatar.h"
#include "../include/event_object_movement.h"

void BuyMenuCollectObjectEventData(void)
{
    s16 facingX, facingY;
    u8 x, y, z;
    u8 num = 0;

    GetXYCoordsOneStepInFrontOfPlayer(&facingX, &facingY);
    z = PlayerGetZCoord();
    
    for (y = 0; y < EVENT_OBJECTS_COUNT; y++)
        sViewportObjectEvents[y].eventObjId = EVENT_OBJECTS_COUNT;
    
    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 7; x++)
        {
            u8 eventObjId = GetEventObjectIdByXYZ(facingX - 3 + x, facingY - 2 + y, z);
            if (eventObjId != EVENT_OBJECTS_COUNT)
            {
                sViewportObjectEvents[num].eventObjId = eventObjId;
                sViewportObjectEvents[num].x = x;
                sViewportObjectEvents[num].y = y;

                switch (gEventObjects[eventObjId].facingDirection)
                {
                    case DIR_SOUTH:
                        sViewportObjectEvents[num].animNum = 0;
                        break;
                    case DIR_NORTH:
                        sViewportObjectEvents[num].animNum = 1;
                        break;
                    case DIR_WEST:
                        sViewportObjectEvents[num].animNum = 2;
                        break;
                    case DIR_EAST:
                    default:
                        sViewportObjectEvents[num].animNum = 3;
                        break;
                }
                num++;
            }
        }
    }
}

void BuyMenuDrawObjectEvents(void)
{
    u8 i, spriteId;
    const struct EventObjectGraphicsInfo *graphicsInfo;

    for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
    {
        if (sViewportObjectEvents[i].eventObjId == EVENT_OBJECTS_COUNT)
            continue;

        
        graphicsInfo = GetEventObjectGraphicsInfo(gEventObjects[sViewportObjectEvents[i].eventObjId].spriteId);        
        spriteId = AddPseudoEventObject(
            gEventObjects[sViewportObjectEvents[i].eventObjId].spriteId,
            SpriteCallbackDummy,
            (u16)sViewportObjectEvents[i].x * 16 - 8,
            (u16)sViewportObjectEvents[i].y * 16 + 48 - graphicsInfo->height / 2,
            2);
        StartSpriteAnim(&gSprites[spriteId], sViewportObjectEvents[i].animNum);
    }
}
