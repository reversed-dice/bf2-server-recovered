// FUNCTION: BF2 0x521d90
namespace dice { namespace hfe { namespace world {
extern void base_0x0053bf90(void* self);
extern void del_0x004085b8(void* self);
void dtor_524550(void* self) {
    *(void**)self = (void*)0xb42d10;
    *(void**)((char*)self + 0x10) = (void*)0xb431b0;
    *(void**)((char*)self + 0x68) = (void*)0xb431e8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb43268;
    *(void**)((char*)self + 0x1f8) = (void*)0xb432d0;
    base_0x0053bf90(self);
    del_0x004085b8(self);
}
} } }
