// FUNCTION: BF2 0x5bf030
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5bf030(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_getIntactIconPtr (0x5bf030)
