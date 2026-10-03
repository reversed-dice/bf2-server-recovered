// FUNCTION: BF2 0x796f00
namespace dice { namespace hfe { namespace world {
extern void base_0x00796e50(void* self);
extern void* g_0x010adf60;
extern void sub_0x00797190(void* self, void* arg);
extern void sub_0x00797110(void* self, void* arg);
void dtor_793b10(void* self) {
    *(void**)self = (void*)0xba7360;
    base_0x00796e50(self);
    g_0x010adf60 = 0;
    char* s0 = (char*)(self) + 0x40;
    sub_0x00797190(s0, *(void**)(s0 + 0x10));
    char* s1 = (char*)(self) + 0x8;
    sub_0x00797110(s1, *(void**)(s1 + 0x10));

}
} } }
