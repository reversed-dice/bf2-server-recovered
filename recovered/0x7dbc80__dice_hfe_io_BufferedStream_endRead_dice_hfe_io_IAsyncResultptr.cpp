// FUNCTION: BF2 0x7dbc80
extern "C" void* f_7dbc80(char* self) {
    char* p = *(char**)(self + 0x30);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x68))(p);
}
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_endRead_dice_hfe_io_IAsyncResultptr (0x7dbc80)
