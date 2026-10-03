// FUNCTION: BF2 0xaa6fb0
namespace dice { namespace hfe {
int execute_0xaa6fb0(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        int v = *(int*)*(void**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x0112ee48;
        void* p = ((void* (*)(void*))(*(void***)m)[0x24])(m);
        ((void (*)(void*, int))(*(void***)p)[0x4f])(p, v);
    }
    return 0;
}
} }
