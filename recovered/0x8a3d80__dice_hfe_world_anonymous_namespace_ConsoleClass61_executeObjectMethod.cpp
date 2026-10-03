// FUNCTION: BF2 0x8a3d80
namespace dice { namespace hfe {
int execute_0x8a3d80(void* self) {
    if (*(int*)((char*)self + 0x30) == 2) {
        int a2 = *(int*)*(void**)((char*)self + 0x38);
        void* b = *(void**)*(void**)((char*)self + 0x40);
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x010c2800;
        void* p = ((void* (*)(void*))(*(void***)m)[0x15])(m);
        ((void (*)(void*, int, void*))(*(void***)p)[0xb])(p, a2, b);
    }
    return 0;
}
} }
