// FUNCTION: BF2 0x7d56b0
extern "C" void base_dice_hfe_Thread_dtor_Thread(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_7d56b0(void* self) {
    *(void**)self = (void*)0xbab0d0;
    base_dice_hfe_Thread_dtor_Thread(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_io_NetServerThread_dtor_NetServerThread (0x7d56b0)
