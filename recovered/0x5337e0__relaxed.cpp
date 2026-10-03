// FUNCTION: BF2 0x5337e0
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5155e0(void* self) {
    *(void**)self = (void*)0xb48f70;
    *(void**)((char*)self + 0x10) = (void*)0xb49200;
    *(void**)((char*)self + 0x68) = (void*)0xb49238;
    *(void**)((char*)self + 0x1c8) = (void*)0xb492b8;
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }
