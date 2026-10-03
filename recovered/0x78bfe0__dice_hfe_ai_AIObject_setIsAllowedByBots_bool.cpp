// FUNCTION: BF2 0x78bfe0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x78bfe0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_setIsAllowedByBots_bool (0x78bfe0)
