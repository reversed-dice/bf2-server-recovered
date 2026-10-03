// FUNCTION: BF2 0x78b940
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void base_0x0078bc40(void* self);
extern void del_0x004085b8(void* self);
void dtor_78b940(void* self) {
    *(void**)self = (void*)0xba4f70;
    del_0x004085b8(*(void**)((char*)self + 0x18));
    base_0x0078bc40(self);
    del_0x004085b8(self);
}
} } }
