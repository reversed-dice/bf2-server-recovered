// FUNCTION: BF2 0x507780
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x220];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x507780(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObject_getDecalObject_const (0x507780)
