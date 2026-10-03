// FUNCTION: BF2 0x845580
namespace dice { namespace hfe {
extern void sub_0x00845910(void* self, void* arg);
extern void del_0x004085b8(void* self);
void dtor_845580(void* self) {
    *(void**)self = (void*)0xbb8110;
    char* s8 = (char*)self + 0x8;
    sub_0x00845910(s8, *(void**)(s8 + 0x10));
    del_0x004085b8(self);
}
} }
