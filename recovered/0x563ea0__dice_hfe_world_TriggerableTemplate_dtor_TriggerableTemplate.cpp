// FUNCTION: BF2 0x563ea0
namespace dice { namespace hfe { namespace world {
extern void sub_0x00453640(void* self);
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_563ea0(void* self) {
    *(void**)self = (void*)0xb52ad0;
    *(void**)((char*)self + 0x10) = (void*)0xb52d60;
    *(void**)((char*)self + 0x68) = (void*)0xb52d98;
    *(void**)((char*)self + 0x1c8) = (void*)0xb52e18;
    sub_0x00453640((char*)self + 0x1f8);


    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }
