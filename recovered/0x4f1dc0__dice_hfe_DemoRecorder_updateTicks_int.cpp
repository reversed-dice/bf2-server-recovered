// FUNCTION: BF2 0x4f1dc0
extern "C" void dice_hfe_DemoSpectatorCamera_updateTicks_int(void*);
extern "C" void f_4f1dc0(char* self) {
    char* p = *(char**)(self + 0xa0);
    if (p != 0) dice_hfe_DemoSpectatorCamera_updateTicks_int(p);
}
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_updateTicks_int (0x4f1dc0)
