// FUNCTION: BF2 0x417ea0
namespace dice { namespace hfe {
extern bool fn_417370(void* a);
extern void fn_4173e0(void* a);
struct MLSC { unsigned char _pad[8]; int m_8; unsigned char _pad2[0x70 - 0xc]; char m_70; };
void setCurrentMap_0x417ea0(MLSC* self, int arg2, bool arg3) {
    char old = self->m_70;
    if (arg3)
        self->m_70 = 1;
    if (fn_417370(self)) {
        self->m_8 = arg2;
        fn_4173e0(self);
    }
    self->m_70 = old;
}
} }
