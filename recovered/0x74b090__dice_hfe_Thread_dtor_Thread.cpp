// FUNCTION: BF2 0x74b090
namespace dice { namespace hfe { namespace world {
extern void f_0x004085b8(void* p);
extern void base_0x004085b8(void* self);
void dtor_74b090(void* self) {
    *(void**)self = (void*)0xb9a550;
    f_0x004085b8(*(void**)((char*)self + 0x8));
    base_0x004085b8(self);
}
} } }
