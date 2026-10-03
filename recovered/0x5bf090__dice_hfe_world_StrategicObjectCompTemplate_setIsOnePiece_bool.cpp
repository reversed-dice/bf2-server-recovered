// FUNCTION: BF2 0x5bf090
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x44];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5bf090(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_setIsOnePiece_bool (0x5bf090)
