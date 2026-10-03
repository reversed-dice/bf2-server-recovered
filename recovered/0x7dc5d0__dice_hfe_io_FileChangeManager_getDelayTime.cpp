// FUNCTION: BF2 0x7dc5d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    float m_v;
    float get() { return m_v; }
};
float get_0x7dc5d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileChangeManager_getDelayTime (0x7dc5d0)
