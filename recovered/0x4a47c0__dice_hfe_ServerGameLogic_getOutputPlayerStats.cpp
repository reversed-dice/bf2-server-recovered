// FUNCTION: BF2 0x4a47c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x55c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4a47c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_getOutputPlayerStats (0x4a47c0)
