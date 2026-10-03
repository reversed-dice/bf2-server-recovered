// FUNCTION: BF2 0x616390
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x369];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x616390(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getLocalPredict_const (0x616390)
