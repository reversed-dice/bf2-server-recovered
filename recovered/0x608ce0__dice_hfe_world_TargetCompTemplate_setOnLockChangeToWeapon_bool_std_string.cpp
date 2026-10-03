// FUNCTION: BF2 0x608ce0
namespace dice { namespace hfe { namespace world {
extern void fn_408238(void* a, void* b);
struct SOL { unsigned char _pad[0x30]; char m_30; unsigned char _pad2[0x38 - 0x31]; char m_38; };
void setOnLockChangeToWeapon_0x608ce0(SOL* self, bool arg2, void* arg3) {
    fn_408238((char*)self + 0x30, arg3);
    self->m_38 = (char)arg2;
}
} } }
