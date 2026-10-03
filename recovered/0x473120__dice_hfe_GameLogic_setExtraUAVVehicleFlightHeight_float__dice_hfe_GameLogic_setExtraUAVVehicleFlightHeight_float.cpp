// FUNCTION: BF2 0x473120
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x458];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x473120(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setExtraUAVVehicleFlightHeight_float (0x473120)
