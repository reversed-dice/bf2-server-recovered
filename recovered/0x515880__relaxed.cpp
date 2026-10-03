// FUNCTION: BF2 0x515880
namespace dice { namespace hfe { namespace world {
extern void base_0x0058b170(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb409b0;
    *(void**)((char*)self + 0x100) = (void*)0xb40cc0;
    base_0x0058b170(self);
    del_0x004085b8(self);
}
} } }
