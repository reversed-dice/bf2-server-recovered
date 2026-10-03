// FUNCTION: BF2 0x625b70
namespace dice { namespace hfe {
extern void sub_0x005b8c60(void* self);
extern void del_0x004085b8(void* p);
extern void fn_0x004085b8(void* self);
void dtor_625b70(void* self) {
    *(void**)self = (void*)0xb7f010;
    *(void**)((char*)self + 0x20) = (void*)0xb7f0c0;
    sub_0x005b8c60((char*)self + 0x58);
    void* m = *(void**)((char*)self + 0x38);
    if (m) { int r = --*(int*)m; if (r == 0) del_0x004085b8(m); }
    *(void**)((char*)self + 0x20) = (void*)0xb7ed90;
    *(void**)self = (void*)0xb7bcb0;
    *(void**)((char*)self + 0x20) = (void*)0xb7ed90;
    *(void**)self = (void*)0xb7bcb0;
    fn_0x004085b8(self);
}
} }
