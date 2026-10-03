// FUNCTION: BF2 0x4ae6a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x568];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4ae6a0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setNextLevel_int (0x4ae6a0)
