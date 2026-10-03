// FUNCTION: BF2 0x629490
namespace dice { namespace hfe { namespace world {
extern void base_0x0062bde0(void* self);
extern void del_0x004085b8(void* self);
void dtor_629490(void* self) {
    *(void**)self = (void*)0xb7fa70;
    *(void**)((char*)self + 0x20) = (void*)0xb7fc38;
    base_0x0062bde0(self);
    del_0x004085b8(self);
}
} } }
