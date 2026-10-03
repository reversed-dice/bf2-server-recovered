// FUNCTION: BF2 0x582280
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
void dtor_582280(void* self) {
    *(void**)self = (void*)0xb59ff0;
    *(void**)((char*)self + 0x10) = (void*)0xb5a280;
    *(void**)((char*)self + 0x68) = (void*)0xb5a2b8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb5a338;
    base_0x005768d0(self);
}
} } }
