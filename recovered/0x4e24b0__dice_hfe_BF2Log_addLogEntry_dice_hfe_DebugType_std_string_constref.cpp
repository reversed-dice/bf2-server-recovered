// FUNCTION: BF2 0x4e24b0
namespace dice { namespace hfe {
extern bool fn_7a3250(void* a);
extern void fn_7a3260(void* a, void* b);
struct ALE { unsigned char _pad[0x30]; void* m_30; };
void addLogEntry_0x4e24b0(ALE* self, void* arg2, void* arg3) {
    if (__builtin_expect(self->m_30 != 0, 1) && fn_7a3250(self->m_30)) {
        fn_7a3260(self->m_30, arg3);
    }
}
} }
