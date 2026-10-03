// FUNCTION: BF2 0x825880
namespace dice { namespace hfe {
extern void fn_826f50(int a, void* b);
struct KVF2 { void* m_0; void* m_8; };
void KeyValFree_0x825880(KVF2* self) {
    fn_826f50(0, self->m_0);
    fn_826f50(0, self->m_8);
}
} }
