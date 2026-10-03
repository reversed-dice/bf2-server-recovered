// FUNCTION: BF2 0x7c3ca0
extern "C" void base_dice_hfe_io_INetworkable_dtor_INetworkable(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_7c3ca0(void* self) {
    *(void**)self = (void*)0xbaa330;
    base_dice_hfe_io_INetworkable_dtor_INetworkable(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_NetworkableBase_dtor_NetworkableBase (0x7c3ca0)
