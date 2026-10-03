// FUNCTION: BF2 0x4baf90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9b];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4baf90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_getOnlyForHuman_const (0x4baf90)
