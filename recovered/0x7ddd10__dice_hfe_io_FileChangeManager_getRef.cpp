// FUNCTION: BF2 0x7ddd10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7ddd10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileChangeManager_getRef (0x7ddd10)
