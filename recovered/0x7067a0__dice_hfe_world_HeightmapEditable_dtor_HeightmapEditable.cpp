// FUNCTION: BF2 0x7067a0
namespace dice { namespace hfe { namespace world {
extern void sub_0x006d6580(void* self);
extern void base_0x006fa3b0(void* self);
extern void del_0x004085b8(void* self);
void dtor_7067a0(void* self) {
    *(void**)self = (void*)0xb96f30;
    *(void**)((char*)self + 0xf0) = (void*)0xb97170;
    *(void**)((char*)self + 0xf8) = (void*)0xb97200;
    sub_0x006d6580((char*)self + 0xf0);


    base_0x006fa3b0(self);
    del_0x004085b8(self);
}
} } }
