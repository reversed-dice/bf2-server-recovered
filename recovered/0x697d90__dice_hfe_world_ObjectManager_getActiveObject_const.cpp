// FUNCTION: BF2 0x697d90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x697d90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_getActiveObject_const (0x697d90)
