// FUNCTION: BF2 0x78ff70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x78ff70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_getInformation_int (0x78ff70)
