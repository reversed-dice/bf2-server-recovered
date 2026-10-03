// FUNCTION: BF2 0x7d74d0
extern "C" void base_dice_hfe_io_FilteringAgent_dtor_FilteringAgent(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_7d74d0(void* self) {
    *(void**)self = (void*)0xbab230;
    base_dice_hfe_io_FilteringAgent_dtor_FilteringAgent(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_PunkBusterFilterAgent_dtor_PunkBusterFilterAgent (0x7d74d0)
