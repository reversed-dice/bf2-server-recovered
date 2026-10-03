// FUNCTION: BF2 0xa83360
namespace dice { namespace hfe {
int execute_0xa83360(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        void* a = *(void**)((char*)self + 0x38);
        int v = *(int*)a;
        *(char*)((char*)self + 0x108) = 0;
        void* s = *(void**)0x010c5420;
        ((void (*)(void*, int))(*(void***)s)[0x32])(s, v);
    }
    return 0;
}
} }
