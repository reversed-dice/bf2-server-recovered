// FUNCTION: BF2 0x83c890
namespace dice {
extern int fn_4081a8(char* a, void* b, void* c, void* d, int e, ...);
void gsDebugAssert_0x83c890(void* fmt, void* a, void* b, void* c) {
    char buf[0x100];
    fn_4081a8(buf, fmt, a, b, (int)c);
    ((void (*)(char*))*(void**)0x00f6b3c0)(buf);
}
}
