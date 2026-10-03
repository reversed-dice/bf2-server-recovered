// FUNCTION: BF2 0x821d80
namespace dice { namespace hfe {
extern void* g_0x00f69ad0;
void f_821d80(void* self, void* v) {
    if (!self)
        self = g_0x00f69ad0;
    *(void**)((char*)self + 0xb8) = v;
}
} }
