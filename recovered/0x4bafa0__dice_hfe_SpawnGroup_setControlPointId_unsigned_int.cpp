// FUNCTION: BF2 0x4bafa0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4bafa0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setControlPointId_unsigned_int (0x4bafa0)
