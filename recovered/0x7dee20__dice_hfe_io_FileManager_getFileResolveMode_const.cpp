// FUNCTION: BF2 0x7dee20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb8];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7dee20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_getFileResolveMode_const (0x7dee20)
