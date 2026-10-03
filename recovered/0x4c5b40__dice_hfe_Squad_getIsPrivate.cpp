// FUNCTION: BF2 0x4c5b40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4c5b40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Squad_getIsPrivate (0x4c5b40)
