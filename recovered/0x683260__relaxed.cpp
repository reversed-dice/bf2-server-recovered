// FUNCTION: BF2 0x683260
namespace dice { namespace hfe {
extern void sub_0x00683220(void* self, void* arg);
extern void del_0x004085b8(void* self);
void dtor_55d0b0(void* self) {
    *(void**)self = (void*)0xb8c570;
    char* s8 = (char*)self + 0x8;
    sub_0x00683220(s8, *(void**)(s8 + 0x10));
    del_0x004085b8(self);
}
} }
