// FUNCTION: BF2 0x8a3450
namespace dice { namespace hfe {
int execute_0x8a3450(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        void* a2 = *(void**)((char*)self + 0x38);
        int v = *(int*)a2;
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x010c2800;
        ((void (*)(void*, int))(*(void***)m)[0x4])(m, v);
    }
    return 0;
}
} }
