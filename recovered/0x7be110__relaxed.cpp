// FUNCTION: BF2 0x7be110
namespace dice { namespace hfe { namespace io {
extern void fn_7a8760(void* a);
int decDepth_0x7a8880(void* self) {
    int d = *(int*)((char*)self + 0x6b8);
    if (d <= 0)
        return 0;
    fn_7a8760((char*)self + 0x20 + (long)d * 0xa8);
    int e = *(int*)((char*)self + 0x6b8) - 1;
    *(int*)((char*)self + 0x6b8) = e;
    *(void**)((char*)self + 0x6b0) = (char*)self + 0x20 + (long)e * 0xa8;
    return 1;
}
} } }
