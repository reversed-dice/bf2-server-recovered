// FUNCTION: BF2 0xac0f70
namespace dice { namespace hfe { namespace tool {
extern void fn_6a9950(int a, unsigned char b);
struct EOM43 { unsigned char _pad[0x30]; int m_30; void* m_38; unsigned char _pad2[0x108 - 0x40]; char m_108; unsigned char _pad3[0x10a - 0x109]; char m_10a; };
void* executeObjectMethod_0xac0f70(EOM43* self) {
    if (self->m_30 == 0) {
        self->m_108 = 1;
        self->m_10a = *(char*)0x1092d80;
        return (char*)self + 0x10a;
    }
    if (self->m_30 != 1)
        return 0;
    unsigned char v = *(unsigned char*)self->m_38;
    self->m_108 = 0;
    fn_6a9950(0x1092d80, v);
    return 0;
}
} } }
