// FUNCTION: BF2 0x5c2640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5c2640(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setSpottedIconSize_int (0x5c2640)
