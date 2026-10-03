// FUNCTION: BF2 0x46ebc0
namespace dice { namespace hfe { namespace world {
extern void sub_0x00470520(void* self, void* arg);
extern void sub_0x004708c0(void* self, void* arg);
extern void sub_0x00470c10(void* self);
void dtor_46ebc0(void* self) {
    *(void**)self = (void*)0xb328d0;
    char* s0 = (char*)(self) + 0x90;
    sub_0x00470520(s0, *(void**)(s0 + 0x10));
    char* s1 = (char*)(self) + 0x60;
    sub_0x004708c0(s1, *(void**)(s1 + 0x10));
    sub_0x00470c10((char*)(self) + 0x10);
}
} } }
