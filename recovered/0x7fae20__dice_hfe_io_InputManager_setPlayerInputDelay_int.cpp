// FUNCTION: BF2 0x7fae20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x68];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7fae20(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_InputManager_setPlayerInputDelay_int (0x7fae20)
