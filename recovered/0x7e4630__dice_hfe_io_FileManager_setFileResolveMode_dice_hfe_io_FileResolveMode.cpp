// FUNCTION: BF2 0x7e4630
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb8];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7e4630(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_setFileResolveMode_dice_hfe_io_FileResolveMode (0x7e4630)
