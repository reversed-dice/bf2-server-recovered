// FUNCTION: BF2 0x603600
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x603600(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_setAlternateParent_dice_hfe_world_GenericFireArmptr (0x603600)
