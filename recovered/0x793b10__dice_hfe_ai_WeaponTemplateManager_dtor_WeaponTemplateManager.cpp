// FUNCTION: BF2 0x793b10
namespace dice { namespace hfe { namespace world {
extern void base_0x007939c0(void* self);
extern void* g_0x010adf40;
extern void sub_0x007943e0(void* self, void* arg);
extern void sub_0x00793ce0(void* self, void* arg);
void dtor_793b10(void* self) {
    *(void**)self = (void*)0xba7060;
    base_0x007939c0(self);
    g_0x010adf40 = 0;
    char* s0 = (char*)(self) + 0x48;
    sub_0x007943e0(s0, *(void**)(s0 + 0x10));
    char* s1 = (char*)(self) + 0x8;
    sub_0x00793ce0(s1, *(void**)(s1 + 0x10));

}
} } }
