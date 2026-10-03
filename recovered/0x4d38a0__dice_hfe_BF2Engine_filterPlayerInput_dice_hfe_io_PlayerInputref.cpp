// FUNCTION: BF2 0x4d38a0
namespace dice { namespace hfe {
int fn_0x4d38a0(void* self, int* out) {
    void* p = *(void**)((char*)self + 0x28);
    int r = 1;
    if (*(char*)p != 0) {
        int i = 0x40;
        do {
            *(int*)out = 0;
            out++;
            i--;
        } while (i != 0);
        r = 0;
    }
    return r;
}
} }
