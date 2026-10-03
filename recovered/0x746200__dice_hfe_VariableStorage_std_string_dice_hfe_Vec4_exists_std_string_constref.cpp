// FUNCTION: BF2 0x746200
namespace dice { namespace hfe {
extern void* fn_0x00746100(void* self);
bool cb_746200(void* self) {
    void* r = fn_0x00746100(self);
    *(void**)((char*)self + 0x30) = r;
    return (void*)((char*)self + 0x8) != r;
}
} }
