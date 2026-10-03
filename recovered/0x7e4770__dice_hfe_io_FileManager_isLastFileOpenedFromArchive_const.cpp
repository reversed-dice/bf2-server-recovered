// FUNCTION: BF2 0x7e4770
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xbc];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7e4770(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_isLastFileOpenedFromArchive_const (0x7e4770)
