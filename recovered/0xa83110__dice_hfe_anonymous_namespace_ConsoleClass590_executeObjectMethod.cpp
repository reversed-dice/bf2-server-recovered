// FUNCTION: BF2 0xa83110
namespace dice { namespace hfe {
int execute_0xa83110(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        void* a2 = *(void**)((char*)self + 0x38);
        int v = *(int*)a2;
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x010c5420;
        ((void (*)(void*, int))(*(void***)m)[0x2c])(m, v);
    }
    return 0;
}
} }
