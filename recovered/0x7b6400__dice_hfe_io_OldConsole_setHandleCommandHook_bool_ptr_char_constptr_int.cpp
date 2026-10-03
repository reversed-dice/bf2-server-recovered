// FUNCTION: BF2 0x7b6400
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9b8];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x7b6400(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_setHandleCommandHook_bool_ptr_char_constptr_int (0x7b6400)
