// FUNCTION: BF2 0x5f3210
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c8];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x5f3210(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_getAlternateObject_const (0x5f3210)
