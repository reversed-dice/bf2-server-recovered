// FUNCTION: BF2 0x6ce060
namespace dice { namespace hfe {
extern void del_0x004085b8(void* p);
void dtor_6ce060(void* self) {
    *(void**)self = (void*)0xb91a50;
    void* m0 = *(void**)((char*)self + 0x20);
    if (m0) del_0x004085b8(m0);
    void* m1 = *(void**)((char*)self + 0x8);
    if (m1) del_0x004085b8(m1);
}
} }
