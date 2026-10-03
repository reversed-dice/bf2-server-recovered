// FUNCTION: BF2 0x7d4d20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7d4d20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_getNumberOfConnections_const (0x7d4d20)
