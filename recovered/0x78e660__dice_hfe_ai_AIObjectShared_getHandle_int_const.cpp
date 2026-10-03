// FUNCTION: BF2 0x78e660
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x78e660(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_getHandle_int_const (0x78e660)
