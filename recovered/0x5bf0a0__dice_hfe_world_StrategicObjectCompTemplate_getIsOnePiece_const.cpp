// FUNCTION: BF2 0x5bf0a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x44];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5bf0a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_getIsOnePiece_const (0x5bf0a0)
