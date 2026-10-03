// FUNCTION: BF2 0x5fe940
namespace dice { namespace hfe { namespace world {
extern void base_0x005fe260(void* self);
extern void del_0x004085b8(void* self);
void dtor_5fe940(void* self) {
    *(void**)self = (void*)0xb75190;
    *(void**)((char*)self + 0x20) = (void*)0xb75400;
    base_0x005fe260(self);
    del_0x004085b8(self);
}
} } }
