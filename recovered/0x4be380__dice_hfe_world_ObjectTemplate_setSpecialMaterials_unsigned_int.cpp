// FUNCTION: BF2 0x4be380
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4be380(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplate_setSpecialMaterials_unsigned_int (0x4be380)
