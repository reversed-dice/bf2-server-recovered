// FUNCTION: BF2 0x4b5110
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x90];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4b5110(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getObjective (0x4b5110)
