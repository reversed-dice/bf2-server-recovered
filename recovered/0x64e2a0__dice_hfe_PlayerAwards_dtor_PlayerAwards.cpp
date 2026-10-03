// FUNCTION: BF2 0x64e2a0
namespace dice { namespace hfe { namespace world {
extern void sub_0x00650130(void* self, void* arg);
extern void sub_0x0064c5b0(void* self);
extern void sub_0x0064b580(void* self);
void dtor_64e2a0(void* self) {
    *(void**)self = (void*)0xb89eb0;
    *(void**)((char*)self + 0x8) = (void*)0xb89f50;
    char* s0 = (char*)(self) + 0x50;
    sub_0x00650130(s0, *(void**)(s0 + 0x10));
    sub_0x0064c5b0((char*)(self) + 0x30);
    sub_0x0064b580((char*)(self) + 0x8);
}
} } }
