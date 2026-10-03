// FUNCTION: BF2 0x7dbca0
extern "C" void* f_7dbca0(char* self) {
    char* p = *(char**)(self + 0x30);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x70))(p);
}
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_beginWrite_void_constptr_unsigned_int_unsigned_int (0x7dbca0)
