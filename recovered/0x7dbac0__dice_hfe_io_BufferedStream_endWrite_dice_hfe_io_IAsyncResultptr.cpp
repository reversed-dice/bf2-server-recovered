// FUNCTION: BF2 0x7dbac0
extern "C" void* f_7dbac0(char* self) {
    char* p = *(char**)(self + 0x30);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x68))(p);
}
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_endWrite_dice_hfe_io_IAsyncResultptr (0x7dbac0)
