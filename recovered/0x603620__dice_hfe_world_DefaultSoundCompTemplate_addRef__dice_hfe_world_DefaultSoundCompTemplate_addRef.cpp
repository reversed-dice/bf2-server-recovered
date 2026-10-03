// FUNCTION: BF2 0x603620
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_16(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundCompTemplate_addRef (16)
