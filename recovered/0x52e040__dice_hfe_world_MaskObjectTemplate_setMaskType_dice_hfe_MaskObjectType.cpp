// FUNCTION: BF2 0x52e040
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x218];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x52e040(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaskObjectTemplate_setMaskType_dice_hfe_MaskObjectType (0x52e040)
