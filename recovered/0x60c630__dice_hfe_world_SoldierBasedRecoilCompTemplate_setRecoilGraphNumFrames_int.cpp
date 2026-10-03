// FUNCTION: BF2 0x60c630
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x60c630(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilCompTemplate_setRecoilGraphNumFrames_int (0x60c630)
