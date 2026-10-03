// FUNCTION: BF2 0x716a70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x716a70(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionManager_setActiveLod_int (0x716a70)
