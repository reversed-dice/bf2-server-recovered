// FUNCTION: BF2 0x56ac00
namespace dice { namespace hfe { namespace world {
extern void base_0x0058b170(void* self);
extern void del_0x004085b8(void* self);
void dtor_56ac00(void* self) {
    *(void**)self = (void*)0xb548d0;
    *(void**)((char*)self + 0x100) = (void*)0xb54be0;
    base_0x0058b170(self);
    del_0x004085b8(self);
}
} } }
