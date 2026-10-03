// FUNCTION: BF2 0x676100
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x676100(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_PlayerUnlockInfo_getRef (0x676100)
