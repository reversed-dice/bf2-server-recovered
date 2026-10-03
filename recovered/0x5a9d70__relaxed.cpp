// FUNCTION: BF2 0x5a9d70
namespace dice { namespace hfe { namespace world {
extern void base_0x0069f670(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb64990;
    *(void**)((char*)self + 0x10) = (void*)0xb64b70;
    base_0x0069f670(self);
    del_0x004085b8(self);
}
} } }
