// FUNCTION: BF2 0x78c270
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x78c270(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getControlInfo_const (0x78c270)
