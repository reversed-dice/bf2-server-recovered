// FUNCTION: BF2 0x61fe70
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void sub_0x0061ce10(void* self);
void dtor_61fe70(void* self) {
    *(void**)self = (void*)0xb7d970;
    *(void**)((char*)self + 0x20) = (void*)0xb7db78;
    void* m = *(void**)((char*)self + 0x60);
    if (m) { int r = --*(int*)m; if (r == 0) del_0x004085b8(m); }
    sub_0x0061ce10(self);
}
} } }
