// FUNCTION: BF2 0x791ac0
namespace dice { namespace hfe {
int fn_0x791ac0(void* self, int i) {
    int v = *(int*)((char*)self + (long)i * 4 + 0x20);
    if (v != -1)
        return v;
    return ((int (*)(void*, int))(*(void***)self)[0x12])(self, i);
}
} }
