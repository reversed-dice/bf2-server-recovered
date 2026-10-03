// FUNCTION: BF2 0x528fc0
namespace dice { namespace hfe { namespace world {
extern void sub_0x00467020(void* self, void* arg);
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_528fc0(void* self) {
    *(void**)((char*)self + 0x10) = (void*)0xb45688;
    *(void**)self = (void*)0xb453d0;
    *(void**)((char*)self + 0x68) = (void*)0xb456c0;
    *(void**)((char*)self + 0x1c8) = (void*)0xb45740;
    char* s0 = (char*)(self) + 0x1f8;
    sub_0x00467020(s0, *(void**)(s0 + 0x10));
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }
