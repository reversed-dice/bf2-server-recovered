// FUNCTION: BF2 0x62ae80
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void sub_0x0062bde0(void* self);
void dtor_62ae80(void* self) {
    *(void**)self = (void*)0xb80070;
    *(void**)((char*)self + 0x20) = (void*)0xb80220;
    void* m = *(void**)((char*)self + 0x38);
    if (m) { int r = --*(int*)m; if (r == 0) del_0x004085b8(m); }
    sub_0x0062bde0(self);
}
} } }
