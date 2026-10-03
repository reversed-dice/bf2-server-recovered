// FUNCTION: BF2 0x7e5830
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7e5830(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZipArchive_getHandler (0x7e5830)
