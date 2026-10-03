// FUNCTION: BF2 0x568180
namespace dice { namespace hfe { namespace world {
extern void base_0x00543e60(void* self);
void dtor_568180(void* self) {
    *(void**)self = (void*)0xb53790;
    *(void**)((char*)self + 0x100) = (void*)0xb53ab8;
    base_0x00543e60(self);
}
} } }
