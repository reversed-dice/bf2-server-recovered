// FUNCTION: BF2 0x63db30
namespace dice { namespace hfe { namespace world {
extern void base_0x005881c0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5155e0(void* self) {
    *(void**)self = (void*)0xb865d0;
    *(void**)((char*)self + 0x10) = (void*)0xb86860;
    *(void**)((char*)self + 0x68) = (void*)0xb86898;
    *(void**)((char*)self + 0x1c8) = (void*)0xb86918;
    base_0x005881c0(self);
    del_0x004085b8(self);
}
} } }
