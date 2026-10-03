// FUNCTION: BF2 0x4d3ad0
namespace dice { namespace hfe {
extern void fn_74af10(void* a);
extern void fn_74af20(void* a);
struct MASR { unsigned char _pad[0x130]; char m_130; unsigned char _pad2[0x144 - 0x131]; int m_144; };
void markAsStillRunning_0x4d3ad0(MASR* self) {
    void* p = (char*)self + 0x130;
    fn_74af10(p);
    self->m_144++;
    fn_74af20(p);
}
} }
