// FUNCTION: BF2 0x78bff0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x78bff0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getIsAllowedByBots (0x78bff0)
