// FUNCTION: BF2 0x55d0b0
namespace dice { namespace hfe {
extern void sub_0x0048d980(void* self, void* arg);
extern void del_0x004085b8(void* self);
void dtor_683260(void* self) {
    *(void**)self = (void*)0xb50830;
    char* s8 = (char*)self + 0x8;
    sub_0x0048d980(s8, *(void**)(s8 + 0x10));
    del_0x004085b8(self);
}
} }
