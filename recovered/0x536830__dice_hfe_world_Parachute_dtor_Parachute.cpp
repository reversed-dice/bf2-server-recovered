// FUNCTION: BF2 0x536830
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void sub_0x00539710(void* self);
void dtor_536830(void* self) {
    *(void**)self = (void*)0xb494d0;
    *(void**)((char*)self + 0x100) = (void*)0xb49a98;
    *(void**)((char*)self + 0x238) = (void*)0xb49ad0;
    *(void**)((char*)self + 0x240) = (void*)0xb49da0;
    void* m = *(void**)((char*)self + 0x610);
    if (m) { int r = --*(int*)m; if (r == 0) del_0x004085b8(m); }
    sub_0x00539710(self);
}
} } }
