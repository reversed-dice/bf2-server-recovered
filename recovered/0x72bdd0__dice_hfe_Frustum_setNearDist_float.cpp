// FUNCTION: BF2 0x72bdd0
namespace dice { namespace hfe {
extern void fn_0x0072bd50(void* self);
struct Obj {
    unsigned char _pad[476];
    float m_f;
    void sf_72bdd0(float d);
};
void Obj::sf_72bdd0(float d) {
    m_f = d;
    fn_0x0072bd50(this);
}
} }
