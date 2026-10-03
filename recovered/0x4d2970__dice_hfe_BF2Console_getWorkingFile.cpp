// FUNCTION: BF2 0x4d2970
extern "C" char* dice_hfe_io_mainConsole;
extern "C" void f_4d2970() {
    char* p = dice_hfe_io_mainConsole;
    (*(void (**)(void*))(*(char**)p + 0x120))(p);
}
// REVERSED_FUNCTION: dice_hfe_BF2Console_getWorkingFile (0x4d2970)
