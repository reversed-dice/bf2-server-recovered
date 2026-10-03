// FUNCTION: BF2 0x439bb0
namespace dice { namespace hfe { namespace world {
extern void sub_0x0043a400(void* self, void* arg);
extern void sub_0x0043a1f0(void* self, void* arg);
extern void del_0x004085b8(void* self);
void dtor_439bb0(void* self) {
    *(void**)self = (void*)0xb2f070;
    char* s0 = (char*)(self) + 0x40;
    sub_0x0043a400(s0, *(void**)(s0 + 0x10));
    char* s1 = (char*)(self) + 0x10;
    sub_0x0043a1f0(s1, *(void**)(s1 + 0x10));
    del_0x004085b8(self);
}
} } }
