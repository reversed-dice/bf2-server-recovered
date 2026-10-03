// FUNCTION: BF2 0x7baf20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c0];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7baf20(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_setMaxLineSize_int (0x7baf20)
