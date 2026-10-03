// FUNCTION: BF2 0x59ceb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x230];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x59ceb0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EditableEnvMapObject_getEnvMapObject_const (0x59ceb0)
