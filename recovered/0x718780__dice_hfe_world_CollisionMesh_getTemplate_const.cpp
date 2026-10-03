// FUNCTION: BF2 0x718780
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x718780(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMesh_getTemplate_const (0x718780)
