// FUNCTION: BF2 0x5e58e0
namespace dice { namespace hfe {
extern void sub_0x004a30e0(void* self);
extern void del_0x004085b8(void* p);
extern void fn_0x00508d90(void* self);
void dtor_5e5960(void* self) {
    *(void**)self = (void*)0xb6e090;
    *(void**)((char*)self + 0x100) = (void*)0xb6e728;
    *(void**)((char*)self + 0x238) = (void*)0xb6e760;
    *(void**)((char*)self + 0x268) = (void*)0xb6e7b0;
    *(void**)((char*)self + 0x270) = (void*)0xb6e838;
    *(void**)((char*)self + 0x278) = (void*)0xb6eb80;
    sub_0x004a30e0((char*)self + 0x370);
    void* m = *(void**)((char*)self + 0x328);
    if (m) { int r = --*(int*)m; if (r == 0) del_0x004085b8(m); }
    fn_0x00508d90(self);
}
} }
