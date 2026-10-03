// FUNCTION: BF2 0x5327a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1d0];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_464(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_addRef (464)
