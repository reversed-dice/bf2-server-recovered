// FUNCTION: BF2 0xaf8460
namespace dice { namespace hfe {
int execute_0xaf8460(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        unsigned char v = *(unsigned char*)*(void**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x01140ad8;
        ((void (*)(void*, unsigned char))(*(void***)m)[0x1a])(m, v);
    }
    return 0;
}
} }
