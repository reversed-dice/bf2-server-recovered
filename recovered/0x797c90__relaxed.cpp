// FUNCTION: BF2 0x797c90
namespace dice { namespace hfe {
extern void* fn_0x00798d50(void* self);
void* get_734980(void* self) {
    void* end = fn_0x00798d50((char*)self + 0x8);
    void* r = 0;
    if ((char*)self + 0x10 != end)
        r = *(void**)((char*)end + 0x28);
    return r;
}
} }
