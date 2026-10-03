// FUNCTION: BF2 0x63dbd0
namespace dice { namespace hfe { namespace world {
extern void base_0x0068ac10(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb86ad0;
    *(void**)((char*)self + 0x100) = (void*)0xb86ec8;
    base_0x0068ac10(self);
    del_0x004085b8(self);
}
} } }
