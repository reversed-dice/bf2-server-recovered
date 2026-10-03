extern "C" void substr01(void*, void*, unsigned long, unsigned long);
extern "C" __attribute__((noreturn)) void thr0(const char*);
extern "C" void* dice_hfe_SimpleTokenizer_mid(void* result, void* unused, void* str, unsigned long pos, unsigned long n) {
    if (*(unsigned long*)(*(char**)str - 0x18) < pos)
        thr0((const char*)0xb26f5f);
    substr01(result, str, pos, n);
    return result;
}
