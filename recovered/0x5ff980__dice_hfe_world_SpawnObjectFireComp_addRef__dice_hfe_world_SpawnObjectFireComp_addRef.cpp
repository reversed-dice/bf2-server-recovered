// FUNCTION: BF2 0x5ff980
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x190];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_400(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireComp_addRef (400)
