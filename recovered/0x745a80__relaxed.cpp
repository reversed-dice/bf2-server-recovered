// FUNCTION: BF2 0x745a80
namespace dice { namespace hfe {
extern void* fn_0x0067b5d0(void* self);
bool cb_745400(void* self) {
    void* r = fn_0x0067b5d0(self);
    *(void**)((char*)self + 0x30) = r;
    return (void*)((char*)self + 0x8) != r;
}
} }
