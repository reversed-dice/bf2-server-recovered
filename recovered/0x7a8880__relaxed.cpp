// FUNCTION: BF2 0x7a8880
namespace dice { namespace hfe { namespace console {
extern void fn_7be000(void* a);
int decDepth_0x7be110(void* self) {
    int d = *(int*)((char*)self + 0x920);
    if (d <= 0)
        return 0;
    fn_7be000((char*)self + 0x238 + (long)d * 0xb0);
    int e = *(int*)((char*)self + 0x920) - 1;
    *(int*)((char*)self + 0x920) = e;
    *(void**)((char*)self + 0x918) = (char*)self + 0x238 + (long)e * 0xb0;
    return 1;
}
} } }
