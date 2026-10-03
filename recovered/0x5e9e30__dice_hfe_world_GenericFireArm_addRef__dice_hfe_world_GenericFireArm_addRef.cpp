// FUNCTION: BF2 0x5e9e30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x280];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_640(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_addRef (640)
