// FUNCTION: BF2 0x67ff00
namespace dice { namespace hfe {
extern void* fn_0x006825a0(void* self, int* v);
void* get_67ff00(void* self, int v) {
    void* end = fn_0x006825a0((char*)self + 0x90, &v);
    void* r = 0;
    if ((char*)self + 0x98 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }
