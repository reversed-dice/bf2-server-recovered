// FUNCTION: BF2 0x60cb80
namespace dice { namespace hfe {
extern void fn_0x0060c9d0(void* self, float f);
struct Obj {
    unsigned char _pad[184];
    float m_f;
    void lf_60cb80();
};
void Obj::lf_60cb80() {
    fn_0x0060c9d0(this, m_f);
}
} }
