// FUNCTION: BF2 0x4baf50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4baf50(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setSquad_int (0x4baf50)
