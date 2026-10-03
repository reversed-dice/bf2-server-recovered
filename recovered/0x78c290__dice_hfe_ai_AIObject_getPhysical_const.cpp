// FUNCTION: BF2 0x78c290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x78c290(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getPhysical_const (0x78c290)
