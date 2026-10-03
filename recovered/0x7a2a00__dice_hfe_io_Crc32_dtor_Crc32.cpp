// FUNCTION: BF2 0x7a2a00
namespace dice { namespace hfe { namespace io {
extern void fn_408198(void* a);
extern void* g_10ae0d0;
void dtor_0x7a2a00(void* self) {
    void* p = g_10ae0d0;
    if (p)
        fn_408198(p);
    g_10ae0d0 = 0;
}
} } }
