// FUNCTION: BF2 0x5ff7a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb4];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_180(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireCompTemplate_addRef (180)
