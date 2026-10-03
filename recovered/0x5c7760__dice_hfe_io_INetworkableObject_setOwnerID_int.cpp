// FUNCTION: BF2 0x5c7760
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5c7760(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_INetworkableObject_setOwnerID_int (0x5c7760)
