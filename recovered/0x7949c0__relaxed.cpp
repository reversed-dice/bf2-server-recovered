// FUNCTION: BF2 0x7949c0
namespace dice { namespace hfe { namespace world {
extern void base_0x00794900(void* self);
extern void* g_0x010adf50;
extern void sub_0x007956b0(void* self, void* arg);
extern void sub_0x00795630(void* self, void* arg);
void dtor_793b10(void* self) {
    *(void**)self = (void*)0xba7260;
    base_0x00794900(self);
    g_0x010adf50 = 0;
    char* s0 = (char*)(self) + 0x48;
    sub_0x007956b0(s0, *(void**)(s0 + 0x10));
    char* s1 = (char*)(self) + 0x8;
    sub_0x00795630(s1, *(void**)(s1 + 0x10));

}
} } }
