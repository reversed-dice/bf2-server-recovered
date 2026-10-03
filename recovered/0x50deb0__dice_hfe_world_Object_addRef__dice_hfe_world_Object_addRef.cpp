// FUNCTION: BF2 0x50deb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x108];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_264(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_addRef (264)
