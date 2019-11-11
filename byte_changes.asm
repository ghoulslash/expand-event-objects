.text
.align 2

.equ EVENT_OBJECT_COUNT, 30

/*
LoadLinkPartnerEventObjectSpritePalette

FindLockedEventObjectIndex

vs_seeker:
	sub_810C3B8
	sub_810C594
	
sub_810C594
npc_get_bit7_or_const_x10_when_inactive 08063D72

sPaletteStructs?

sub_8111688
*/

@@@@@@@@@@ SaveEventObjects
.org 0x4C284, 0xFF
	mov r2, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ LoadEventObjects
.org 0x4C2CC, 0xFF
	mov r2, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ LinkPlayerDetectCollision	
.org 0x5885A, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ sub_805BC60
.org 0x5BC9C, 0xFF
	cmp r0, #EVENT_OBJECT_COUNT

@@@@@@@@@@ ClearAllEventObjects
.org 0x5DE64, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ GetFirstInactiveEventObjectId
.org 0x5DF46, 0xFF
	cmp r1, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ TryGetEventObjectIdByLocalIdAndMap	
.org 0x5DF9E, 0xFF
	cmp r0, #EVENT_OBJECT_COUNT	

@@@@@@@@@@ GetEventObjectIdByXY
.org 0x5DFE4, 0xFF
	cmp r3, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ GetEventObjectIdByLocalIdAndMapInternal
.org 0x5E036, 0xFF
	cmp r1, #EVENT_OBJECT_COUNT-1
	.byte 0xE5, 0xD9
	mov r0, #EVENT_OBJECT_COUNT

@@@@@@@@@@ GetEventObjectIdByLocalId
.org 0x5E072, 0xFF
	cmp r2, #EVENT_OBJECT_COUNT-1
	.byte 0xEB, 0xD9
	mov r0, #EVENT_OBJECT_COUNT
	
@@@@@@@@@@ InitEventObjectStateFromTemplate
.org 0x5E106, 0xff
	mov r0, #EVENT_OBJECT_COUNT
	
	
	
@@@@@@@@@@ GetAvailableEventObjectId
.org 0x5E454, 0xff
	cmp r2, #EVENT_OBJECT_COUNT-1
.org 0x5E468, 0xff
	cmp r2, #EVENT_OBJECT_COUNT-1
.org 0x5E4A2, 0xff
	cmp r2, #EVENT_OBJECT_COUNT-1
	
	
@@@@@@@@@@ RemoveAllEventObjectsExceptPlayer	
.org 0x5E57C, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1	
	
@@@@@@@@@@ TrySetupEventObjectSprite
.org 0x5E5C2, 0xff
	cmp r0, #EVENT_OBJECT_COUNT
	.byte 0x01, 0xD1
	mov r0, #EVENT_OBJECT_COUNT
.org 0x5E642, 0xff
	mov r0, #EVENT_OBJECT_COUNT
	
@@@@@@@@@@ TrySpawnEventObjectTemplate	
.org 0x5E79A, 0xFF
	cmp r2, #EVENT_OBJECT_COUNT
	.byte 0x04, 0xD1
	mov r0, #EVENT_OBJECT_COUNT
	
@@@@@@@@@@ TrySpawnEventObject
.org 0x5E8DE, 0xFF
	mov r0, #EVENT_OBJECT_COUNT


@@@@@@@@@@ RemoveEventObjectsOutsideView
.org 0x5ED5A, 0xFF
	cmp r3, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ link_room_instanciate_characters	
.org 0x5EE2A, 0xFF
	cmp r6, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ sub_805F378
.org 0x5F38A, 0xFF
	cmp r1, #EVENT_OBJECT_COUNT

@@@@@@@@@@ UpdateEventObjectCoordsForCameraUpdate
.org 0x5F880, 0xFF
	cmp r3, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ GetEventObjectIdByXYZ
.org 0x5F8EA, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1
	.byte 0xDE, 0xD9
	mov r0, #EVENT_OBJECT_COUNT
	
	
@@@@@@@@@@ is_there_a_npc_to_interact_with	
.org 0x63972, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ FreezeEventObjects
.org 0x6899E, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ FreezeEventObjectsExceptOne
.org 0x689E2, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ UnfreezeEventObjects
.org 0x68A7E, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ GetInteractedLinkPlayerScript
.org 0x6CF88, 0xFF
	cmp r3, #EVENT_OBJECT_COUNT
	
@@@@@@@@@@ GetInteractedEventObjectScript
.org 0x6D014, 0xFF
	cmp r5, #EVENT_OBJECT_COUNT
.org 0x6D062, 0xFF
	cmp r5, #EVENT_OBJECT_COUNT
	
@@@@@@@@@@ CheckForTrainersWantingBattle
.org 0x81B74, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1

@@@@@@@@@@ ScriptMovement_IsObjectMovementFinished
.org 0x974BE, 0xFF
	cmp r1, #EVENT_OBJECT_COUNT

@@@@@@@@@@ ScriptMovement_TryAddNewMovement
.org 0x97576, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT
.org 0x9759C, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT

@@@@@@@@@@ GetMovementScriptIdFromEventObjectId
.org 0x975F0, 0xFF
	cmp r2, #EVENT_OBJECT_COUNT-1
	.byte 0xF1, 0xD9
	mov r0, #EVENT_OBJECT_COUNT

@@@@@@@@@@ ScriptMovement_UnfreezeActiveObjects
.org 0x9779A, 0xFF
	cmp r5, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ ScriptMovement_MoveObjects
.org 0x977E2, 0xFF
	cmp r5, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ sub_80DCD48
.org 0xDCE06, 0xFF
	cmp r7, #EVENT_OBJECT_COUNT-1
	
@@@@@@@@@@ sub_810C3B8
.org 0x10C418, 0xFF
	cmp r4, #EVENT_OBJECT_COUNT-1
		

@@@@@@@@@@ sub_815A008
.org 0x15A1DE, 0xFF
	cmp r1, #EVENT_OBJECT_COUNT-1
	
	
@@@@@@@@@@ sub_815A50C
.org 0x15A50C, 0xFF
	cmp r0, #EVENT_OBJECT_COUNT-1

	
	
	