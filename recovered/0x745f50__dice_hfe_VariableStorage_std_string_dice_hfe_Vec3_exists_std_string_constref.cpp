// FUNCTION: BF2 0x745f50
namespace dice { namespace hfe {
extern void* fn_0x00745e50(void* self);
bool cb_745f50(void* self) {
    void* r = fn_0x00745e50(self);
    *(void**)((char*)self + 0x30) = r;
    return (void*)((char*)self + 0x8) != r;
}
} }
