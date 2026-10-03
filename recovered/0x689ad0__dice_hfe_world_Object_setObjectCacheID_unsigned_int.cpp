// FUNCTION: BF2 0x689ad0
namespace dice { namespace hfe { namespace world {
extern void fn_407af8() __attribute__((noreturn));
struct SOCI { unsigned char _pad[8]; int m_8; unsigned char _pad2[0x48 - 0xc]; unsigned int m_48; unsigned char _pad3[0x1f0 - 0x4c]; int m_1f0; };
void setObjectCacheID_0x689ad0(SOCI* self, unsigned int arg2) {
    self->m_48 = arg2;
    if (arg2) {
        if (self->m_1f0)
            fn_407af8();
        self->m_1f0 = (self->m_8 & 0xcfc3ffdf) | 0x40000000;
    } else {
        self->m_1f0 = 0;
    }
}
} } }
