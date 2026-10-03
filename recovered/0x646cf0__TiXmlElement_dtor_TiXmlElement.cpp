// FUNCTION: BF2 0x646cf0
namespace dice { namespace hfe { namespace world {
extern void base_0x00645330(void* self);
extern void sub_0x00645b10(void* self);
extern void base_0x00646460(void* self);
extern void del_0x004085b8(void* self);
void dtor_646cf0(void* self) {
    *(void**)self = (void*)0xb88270;
    base_0x00645330(self);
    sub_0x00645b10((char*)self + 0x58);
    base_0x00646460(self);
    del_0x004085b8(self);
}
} } }
