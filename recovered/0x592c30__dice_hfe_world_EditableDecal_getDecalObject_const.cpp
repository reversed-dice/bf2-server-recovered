// FUNCTION: BF2 0x592c30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x218];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x592c30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EditableDecal_getDecalObject_const (0x592c30)
