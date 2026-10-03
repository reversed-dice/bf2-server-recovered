// FUNCTION: BF2 0x70a290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x70a290(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_BspBuilder_getMins_const (0x70a290)
