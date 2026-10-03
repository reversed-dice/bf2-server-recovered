// FUNCTION: BF2 0x7a81c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x7a81c0(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_setConsoleCompiler_dice_hfe_io_ConsoleCompilerptr (0x7a81c0)
