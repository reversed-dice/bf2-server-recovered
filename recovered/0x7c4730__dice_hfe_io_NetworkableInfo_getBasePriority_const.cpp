// FUNCTION: BF2 0x7c4730
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    float m_v;
    float get() { return m_v; }
};
float get_0x7c4730(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_getBasePriority_const (0x7c4730)
