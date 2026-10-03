// FUNCTION: BF2 0x850890
extern "C" char* dice_hfe_io_controlMapManager;
extern "C" void f_850890() {
    char* p = dice_hfe_io_controlMapManager;
    (*(void (**)(void*))(*(char**)p + 0x68))(p);
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_getActiveControlMap (0x850890)
