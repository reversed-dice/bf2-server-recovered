// FUNCTION: BF2 0x686f70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x686f70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getChild_const (0x686f70)
