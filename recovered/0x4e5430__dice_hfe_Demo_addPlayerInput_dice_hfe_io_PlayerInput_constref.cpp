// FUNCTION: BF2 0x4e5430
extern "C" void dice_hfe_DemoRecorder_addPlayerInput_dice_hfe_io_PlayerInput_constref(void*);
extern "C" void f_4e5430(char* self) {
    char* p = *(char**)(self + 0x10);
    if (p != 0) dice_hfe_DemoRecorder_addPlayerInput_dice_hfe_io_PlayerInput_constref(p);
}
// REVERSED_FUNCTION: dice_hfe_Demo_addPlayerInput_dice_hfe_io_PlayerInput_constref (0x4e5430)
