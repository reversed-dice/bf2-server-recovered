// FUNCTION: BF2 0x821dc0
namespace dice { namespace hfe {
extern void* g_0x00f69ad0;
void f_821dc0(void* self, void* v) {
    if (!self)
        self = g_0x00f69ad0;
    *(void**)((char*)self + 0xc8) = v;
}
} }
