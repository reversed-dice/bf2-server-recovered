// FUNCTION: BF2 0x4cd660
extern "C" void base_dice_hfe_Thread_dtor_Thread(void* self);
extern "C" void operator_delete_stub(void* self);
extern "C" void dtor_4cd660(void* self) {
    *(void**)self = (void*)0xb38b90;
    base_dice_hfe_Thread_dtor_Thread(self);
    operator_delete_stub(self);
}
// REVERSED_FUNCTION: dice_hfe_VoipServerInternalHookThread_dtor_VoipServerInternalHookThread (0x4cd660)
