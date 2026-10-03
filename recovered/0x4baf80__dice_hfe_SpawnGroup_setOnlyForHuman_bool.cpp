// FUNCTION: BF2 0x4baf80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9b];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4baf80(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setOnlyForHuman_bool (0x4baf80)
