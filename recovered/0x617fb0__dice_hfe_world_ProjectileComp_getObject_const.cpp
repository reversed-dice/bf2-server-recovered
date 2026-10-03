// FUNCTION: BF2 0x617fb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x617fb0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ProjectileComp_getObject_const (0x617fb0)
