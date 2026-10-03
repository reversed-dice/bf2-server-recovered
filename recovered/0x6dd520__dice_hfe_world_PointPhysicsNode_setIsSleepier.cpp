// FUNCTION: BF2 0x6dd520
namespace dice { namespace hfe {
extern void* g_0x010a3660;
void f_6dd520(void* self) {
    void* g = *(void**)0x010a3660;
    if (*(int*)g != 0x1) {
        int c = *(int*)((char*)self + 0x74);
        if (c > 0)
            *(int*)((char*)self + 0x74) = c - 1;
    }
}
} }
