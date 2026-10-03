// FUNCTION: BF2 0x4bd420
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4bd420(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_IObject_getObjectCacheID (0x4bd420)
