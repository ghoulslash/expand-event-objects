# expand-event-objects
This project increases the number of (active) map event objects. Be aware that too many map objects may mess with weather, and that the GBA is limited to loading 16 palettes at once, still.

# To setup
1. change the values in src/defines.h to what you want. EVENT_OBJECTS_COUNT_2 is the number of additional event objects past the original 16

2. Update the ram values in ./ram_repoints to where you want to repoint the event object data.  These should match those in src/defines.h

3. update EVENT_OBJECT_COUNT in ./byte_changes.asm to the value of EVENT_OBJECTS_COUNT_1 + EVENT_OBJECTS_COUNT_2

