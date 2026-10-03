// FUNCTION: BF2 0x603dd0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void sub_0x00608e20(void* self);
void dtor_603dd0(void* self) {
    *(void**)self = (void*)0xb76610;
    *(void**)((char*)self + 0x20) = (void*)0xb767e8;
    void* m = *(void**)((char*)self + 0x88);
    if (m) { int r = --*(int*)m; if (r == 0) del_0x004085b8(m); }
    sub_0x00608e20(self);
}
} } }
