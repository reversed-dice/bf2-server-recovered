// FUNCTION: BF2 0x4d2950
extern "C" char* dice_hfe_io_mainConsole;
extern "C" void f_4d2950() {
    char* p = dice_hfe_io_mainConsole;
    (*(void (**)(void*))(*(char**)p + 0x28))(p);
}
// REVERSED_FUNCTION: dice_hfe_BF2Console_outputToConsole_std_string_constref (0x4d2950)
