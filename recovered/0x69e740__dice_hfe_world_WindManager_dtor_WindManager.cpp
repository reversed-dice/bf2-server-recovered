// FUNCTION: BF2 0x69e740
namespace dice { namespace hfe { namespace world {
extern void sub_0x0069ef20(void* self, void* arg);
extern void sub_0x0069ef20(void* self, void* arg);
extern void sub_0x0069ef20(void* self, void* arg);
void dtor_69e740(void* self) {
    *(void**)self = (void*)0xb8efb0;
    char* s0 = (char*)(self) + 0x70;
    sub_0x0069ef20(s0, *(void**)(s0 + 0x10));
    char* s1 = (char*)(self) + 0x40;
    sub_0x0069ef20(s1, *(void**)(s1 + 0x10));
    char* s2 = (char*)(self) + 0x10;
    sub_0x0069ef20(s2, *(void**)(s2 + 0x10));

}
} } }
