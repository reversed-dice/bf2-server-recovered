// FUNCTION: BF2 0x6d1500
namespace dice { namespace hfe {
extern void* fn_0x006d23b0(void* self);
void* get_6d1500(void* self) {
    void* end = fn_0x006d23b0(self);
    void* r = 0;
    if ((char*)self + 0x8 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }
