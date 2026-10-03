// FUNCTION: BF2 0x791590
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x791590(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_getObject_const (0x791590)
