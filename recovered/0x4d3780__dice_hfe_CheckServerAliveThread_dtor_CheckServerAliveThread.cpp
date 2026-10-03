// FUNCTION: BF2 0x4d3780
extern "C" void base_dice_hfe_Thread_dtor_Thread(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_4d3780(void* self) {
    *(void**)self = (void*)0xb38f90;
    base_dice_hfe_Thread_dtor_Thread(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_CheckServerAliveThread_dtor_CheckServerAliveThread (0x4d3780)
