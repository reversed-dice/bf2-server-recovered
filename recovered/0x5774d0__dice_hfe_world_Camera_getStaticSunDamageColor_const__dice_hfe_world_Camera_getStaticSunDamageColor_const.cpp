// FUNCTION: BF2 0x5774d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_p;
    void* get() { return (char*)m_p + 0x378; }
};
void* f_40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getStaticSunDamageColor_const (0x5774d0)
