// FUNCTION: BF2 0x7dbc60
extern "C" void* f_7dbc60(char* self) {
    char* p = *(char**)(self + 0x30);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x60))(p);
}
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_beginRead_voidptr_unsigned_int_unsigned_int (0x7dbc60)
