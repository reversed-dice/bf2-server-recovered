// FUNCTION: BF2 0x790760
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x790760(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_getRef (0x790760)
