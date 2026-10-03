// FUNCTION: BF2 0x87ccf0
namespace dice { namespace hfe {
int execute_0x87ccf0(void* self) {
    if (*(int*)((char*)self + 0x30) == 2) {
        int a2 = *(int*)*(void**)((char*)self + 0x38);
        int b = *(int*)*(void**)((char*)self + 0x40);
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x010b8c08;
        ((void (*)(void*, int, int))(*(void***)m)[0x17])(m, a2, b);
    }
    return 0;
}
} }
