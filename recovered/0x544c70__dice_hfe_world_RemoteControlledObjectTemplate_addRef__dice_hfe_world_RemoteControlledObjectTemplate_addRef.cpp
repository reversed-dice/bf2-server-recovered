// FUNCTION: BF2 0x544c70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1f4];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_500(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObjectTemplate_addRef (500)
