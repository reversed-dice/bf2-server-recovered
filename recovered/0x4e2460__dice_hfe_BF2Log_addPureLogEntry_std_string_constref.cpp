// FUNCTION: BF2 0x4e2460
namespace dice { namespace hfe {
extern bool fn_7a3250(void* a);
extern void fn_7a3260(void* a, void* b);
struct APLE2 { unsigned char _pad[0x38]; void* m_38; };
void addPureLogEntry_0x4e2460(APLE2* self, void* arg2) {
    if (__builtin_expect(self->m_38 != 0, 1) && fn_7a3250(self->m_38)) {
        fn_7a3260(self->m_38, arg2);
    }
}
} }
