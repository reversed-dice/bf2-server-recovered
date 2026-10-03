// FUNCTION: BF2 0x514c80
namespace dice { namespace hfe { namespace world {
extern void base_0x00573ec0(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb40130;
    *(void**)((char*)self + 0x100) = (void*)0xb40440;
    base_0x00573ec0(self);
    del_0x004085b8(self);
}
} } }
