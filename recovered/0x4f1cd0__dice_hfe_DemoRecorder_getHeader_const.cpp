// FUNCTION: BF2 0x4f1cd0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x4f1cd0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_getHeader_const (0x4f1cd0)
