// FUNCTION: BF2 0x745400
namespace dice { namespace hfe {
extern void* fn_0x004c95c0(void* self);
bool cb_745620(void* self) {
    void* r = fn_0x004c95c0(self);
    *(void**)((char*)self + 0x30) = r;
    return (void*)((char*)self + 0x8) != r;
}
} }
