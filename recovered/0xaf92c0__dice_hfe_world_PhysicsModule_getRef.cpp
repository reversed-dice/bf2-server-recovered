// FUNCTION: BF2 0xaf92c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0xaf92c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsModule_getRef (0xaf92c0)
