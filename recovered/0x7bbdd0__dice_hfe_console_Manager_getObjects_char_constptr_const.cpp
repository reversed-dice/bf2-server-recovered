// FUNCTION: BF2 0x7bbdd0
namespace dice { namespace hfe { namespace console {
extern void* fn_7bd1f0(void* self, const char** s);
void* cb_7bbdd0(void* self, const char* s) {
    const char* sp = s;
    void* it = fn_7bd1f0((char*)self + 0x78, &sp);
    if (it != (char*)self + 0x80)
        return (char*)it + 0x28;
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_console_Manager_getObjects_char_constptr_const (0x7bbdd0)
