#include "defines.h"
#include "../include/shop.h"
#include "../include/field_player_avatar.h"
#include "../include/event_object_movement.h"

/*
void BuyMenuCollectEventObjectData(void)
{
    s16 facingX, facingY;
    u8 x, y, z;
    u8 num = 0;

    GetXYCoordsOneStepInFrontOfPlayer(&facingX, &facingY);
    z = PlayerGetZCoord();
    
    for (y = 0; y < EVENT_OBJECTS_COUNT; y++)
        gViewportEventObjects[y].eventObjId = EVENT_OBJECTS_COUNT;
    
    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 7; x++)
        {
            u8 eventObjId = GetEventObjectIdByXYZ(facingX - 3 + x, facingY - 2 + y, z);
            if (eventObjId != EVENT_OBJECTS_COUNT)
            {
                gViewportEventObjects[num].eventObjId = eventObjId;
                gViewportEventObjects[num].x = x;
                gViewportEventObjects[num].y = y;

                switch (gEventObjects[eventObjId].facingDirection)
                {
                    case DIR_SOUTH:
                        gViewportEventObjects[num].animNum = 0;
                        break;
                    case DIR_NORTH:
                        gViewportEventObjects[num].animNum = 1;
                        break;
                    case DIR_WEST:
                        gViewportEventObjects[num].animNum = 2;
                        break;
                    case DIR_EAST:
                    default:
                        gViewportEventObjects[num].animNum = 3;
                        break;
                }
                
                num++;
            }
        }
    }
}

void BuyMenuDrawEventObjects(void)
{
    u8 i, spriteId;
    const struct EventObjectGraphicsInfo *graphicsInfo;

    for (i = 0; i < EVENT_OBJECTS_COUNT; i++)
    {
        if (gViewportEventObjects[i].eventObjId == EVENT_OBJECTS_COUNT)
            continue;

        graphicsInfo = GetEventObjectGraphicsInfo(gEventObjects[gViewportEventObjects[i].eventObjId].graphicsId);        
        spriteId = AddPseudoEventObject(
            gEventObjects[gViewportEventObjects[i].eventObjId].graphicsId,
            SpriteCallbackDummy,
            (u16)gViewportEventObjects[i].x * 16 - 8,
            (u16)gViewportEventObjects[i].y * 16 + 48 - graphicsInfo->height / 2,
            2);
        StartSpriteAnim(&gSprites[spriteId], gViewportEventObjects[i].animNum);
    }
}

// 0809B764
void BuyMenuDrawOverworld(void)
{
    BuyMenuCollectEventObjectData();
    BuyMenuDrawEventObjects();
    BuyMenuDrawMapBg();
}
*/

