// FUNCTION: BF2 0x701930
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x701930(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getRef (0x701930)
