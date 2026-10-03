// FUNCTION: BF2 0x62ac00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x62ac00(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraCompTemplate_setChangeCameraId_int (0x62ac00)
