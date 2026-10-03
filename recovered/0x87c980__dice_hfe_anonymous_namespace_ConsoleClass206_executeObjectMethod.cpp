// FUNCTION: BF2 0x87c980
namespace dice { namespace hfe {
int execute_0x87c980(void* self) {
    if (*(int*)((char*)self + 0x30) == 3) {
        int a = *(int*)*(void**)((char*)self + 0x38);
        int b = *(int*)*(void**)((char*)self + 0x40);
        int c = *(int*)*(void**)((char*)self + 0x48);
        *(char*)((char*)self + 0x108) = 0;
        void* m = *(void**)0x010b8c08;
        ((void (*)(void*, int, int, int))(*(void***)m)[0x27])(m, a, b, c);
    }
    return 0;
}
} }
