// FUNCTION: BF2 0x6a3b40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x6a3b40(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PortalManager_setDebugLevel_int (0x6a3b40)
