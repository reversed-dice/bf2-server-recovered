// FUNCTION: BF2 0x6a39a0
namespace dice { namespace hfe { namespace world {

void fn_0x6a39a0(void* self, int eventType, void* obj1, void* obj2, unsigned flags) {
    *(void**)self = (void*)0xb8f9d0;
    *(int*)((char*)self+8) = eventType;
    *(void**)((char*)self+0x10) = obj1;
    *(void**)((char*)self+0x18) = obj2;
    *(unsigned*)((char*)self+0x20) = flags;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PortalEvent_PortalEvent_dice_hfe_world_PortalEventType_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_unsigned_int (0x6a39a0)
