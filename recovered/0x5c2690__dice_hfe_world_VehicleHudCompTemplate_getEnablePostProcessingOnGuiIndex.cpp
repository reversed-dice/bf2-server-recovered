// FUNCTION: BF2 0x5c2690
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c2690(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getEnablePostProcessingOnGuiIndex (0x5c2690)
