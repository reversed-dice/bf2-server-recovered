// FUNCTION: BF2 0x7def10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7def10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_FileManager_getBaseSystem (0x7def10)
