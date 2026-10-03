// FUNCTION: BF2 0x8aeb80
namespace dice { namespace hfe {
int execute_0x8aeb80(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        unsigned char v = *(unsigned char*)*(void**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* s = *(void**)0x010c5420;
        void* p = s ? ((void* (*)(void*, int))(*(void***)s)[0x3])(s, *(int*)0x00c76020) : 0;
        ((void (*)(void*, unsigned char))(*(void***)p)[0x13])(p, v);
    }
    return 0;
}
} }
