// FUNCTION: BF2 0x734980
namespace dice { namespace hfe {
extern void* fn_0x00736de0(void* self);
void* get_797c90(void* self) {
    void* end = fn_0x00736de0((char*)self + 0xc0);
    void* r = 0;
    if ((char*)self + 0xc8 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }
