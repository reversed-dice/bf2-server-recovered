// FUNCTION: BF2 0x683b70
extern "C" void base_dice_hfe_world_BinTreeCuller_clear(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_683b70(void* self) {
    *(void**)self = (void*)0xb8c9d0;
    base_dice_hfe_world_BinTreeCuller_clear(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_world_BinTreeCuller_dtor_BinTreeCuller (0x683b70)
