// FUNCTION: BF2 0x6a1110
namespace dice { namespace hfe {
extern void* fn_0x006a2f50(void* self, int* v);
void* get_6a1110(void* self, int v) {
    void* end = fn_0x006a2f50((char*)self + 0x18, &v);
    void* r = 0;
    if ((char*)self + 0x20 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }
