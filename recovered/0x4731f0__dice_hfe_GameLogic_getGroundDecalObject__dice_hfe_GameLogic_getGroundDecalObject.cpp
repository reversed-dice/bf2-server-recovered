// FUNCTION: BF2 0x4731f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2f0];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x4731f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getGroundDecalObject (0x4731f0)
