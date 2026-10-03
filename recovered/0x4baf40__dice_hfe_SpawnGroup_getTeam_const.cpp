// FUNCTION: BF2 0x4baf40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4baf40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_getTeam_const (0x4baf40)
