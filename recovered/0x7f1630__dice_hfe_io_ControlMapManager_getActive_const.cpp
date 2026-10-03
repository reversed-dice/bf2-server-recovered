// FUNCTION: BF2 0x7f1630
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7f1630(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_ControlMapManager_getActive_const (0x7f1630)
