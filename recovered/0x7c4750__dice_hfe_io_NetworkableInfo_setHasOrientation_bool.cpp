// FUNCTION: BF2 0x7c4750
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x7c4750(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_setHasOrientation_bool (0x7c4750)
