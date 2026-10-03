// FUNCTION: BF2 0x572c50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3d4];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_980(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineContainerTemplate_addRef (980)
