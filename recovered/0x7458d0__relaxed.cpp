// FUNCTION: BF2 0x7458d0
namespace dice { namespace hfe {
extern void* fn_0x007457d0(void* self);
bool cb_745400(void* self) {
    void* r = fn_0x007457d0(self);
    *(void**)((char*)self + 0x30) = r;
    return (void*)((char*)self + 0x8) != r;
}
} }
