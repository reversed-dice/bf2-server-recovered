// FUNCTION: BF2 0xaf6dc0
namespace dice { namespace hfe {
int execute_0xaf6dc0(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        void* a2 = *(void**)((char*)self + 0x38);
        int v = *(int*)a2;
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x010a4328;
        ((void (*)(void*, int))(*(void***)m)[0x9])(m, v);
    }
    return 0;
}
} }
