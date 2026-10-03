// FUNCTION: BF2 0x7be2e0
extern "C" void dice_hfe_console_Parser_sub_ctor(void* p);

void ctor_7be2e0(void* self) {
    *(void**)self = 0;
    *(void**)((char*)self + 8) = 0;
    *(void**)((char*)self + 0x10) = (void*)0xf6c6e8;
    *(int*)((char*)self + 0x18) = 0;
    char* base = (char*)self + 0x20;
    char* p = base;
    long i = 9;
    do {
        dice_hfe_console_Parser_sub_ctor(p);
        i--;
        p += 0xa8;
    } while (i != -1);
    *(void**)((char*)self + 0x6b0) = base;
    *(int*)((char*)self + 0x6b8) = 0;
}
