// FUNCTION: BF2 0x4b4f90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4b4f90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getKill (0x4b4f90)
