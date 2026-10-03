// FUNCTION: BF2 0x4bd590
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1ec];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4bd590(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_setUpdateFrequencyType_dice_hfe_world_UpdateFreqencyType (0x4bd590)
