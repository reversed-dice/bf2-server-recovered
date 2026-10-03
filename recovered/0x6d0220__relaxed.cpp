// FUNCTION: BF2 0x6d0220
namespace dice { namespace hfe {
extern void* fn_0x006d0fa0(void* self);
void* get_6b71d0(void* self) {
    void* end = fn_0x006d0fa0(self);
    void* r = 0;
    if ((char*)self + 0x8 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }
