// FUNCTION: BF2 0x60a6e0
namespace dice { namespace hfe { namespace world {
extern void base_0x0060a010(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb786d0;
    *(void**)((char*)self + 0x20) = (void*)0xb78848;
    base_0x0060a010(self);
    del_0x004085b8(self);
}
} } }
