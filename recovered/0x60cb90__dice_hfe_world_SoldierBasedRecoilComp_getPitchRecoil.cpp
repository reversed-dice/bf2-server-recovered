// FUNCTION: BF2 0x60cb90
namespace dice { namespace hfe {
extern void fn_0x0060c9d0(void* self, float f);
struct Obj {
    unsigned char _pad[180];
    float m_f;
    void lf_60cb90();
};
void Obj::lf_60cb90() {
    fn_0x0060c9d0(this, m_f);
}
} }
