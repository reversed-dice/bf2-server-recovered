// FUNCTION: BF2 0x7cf220
namespace dice { namespace hfe {
extern void del_0x004085b8(void* p);
void dtor_7cf220(void* self) {
    *(void**)self = (void*)0xbaab70;
    void* m0 = *(void**)((char*)self + 0x50);
    if (m0) del_0x004085b8(m0);
    void* m1 = *(void**)((char*)self + 0x38);
    if (m1) del_0x004085b8(m1);
    void* m2 = *(void**)((char*)self + 0x20);
    if (m2) del_0x004085b8(m2);
    void* m3 = *(void**)((char*)self + 0x8);
    if (m3) del_0x004085b8(m3);
}
} }
