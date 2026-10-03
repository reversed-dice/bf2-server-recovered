// FUNCTION: BF2 0x5ea1a0
namespace dice { namespace hfe {
extern bool fn_5ea180(void* a);
struct OB25 {
    unsigned char _pad[0x80];
    void* m_80;
    int f_0x5ea1a0();
};
int OB25::f_0x5ea1a0() {
    return fn_5ea180(this) ? *(int*)((char*)m_80 + 0x40) : *(int*)((char*)m_80 + 0x3c);
}
} }
