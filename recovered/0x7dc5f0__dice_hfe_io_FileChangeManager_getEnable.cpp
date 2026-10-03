// FUNCTION: BF2 0x7dc5f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x84];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7dc5f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileChangeManager_getEnable (0x7dc5f0)
