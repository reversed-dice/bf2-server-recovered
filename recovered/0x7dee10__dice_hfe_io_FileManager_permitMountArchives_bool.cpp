// FUNCTION: BF2 0x7dee10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xbd];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x7dee10(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_permitMountArchives_bool (0x7dee10)
