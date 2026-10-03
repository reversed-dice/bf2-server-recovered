// FUNCTION: BF2 0x6dfb60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x6dfb60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticResponsePhysics_getSimpleNextToCheck (0x6dfb60)
