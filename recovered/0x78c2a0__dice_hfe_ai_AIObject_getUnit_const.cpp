// FUNCTION: BF2 0x78c2a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x78c2a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getUnit_const (0x78c2a0)
