// FUNCTION: BF2 0x7bb1e0
extern "C" void real_0x7bf7a0(void* self, void* a, void* b, int c);

namespace dice { namespace hfe { namespace console {
void fn_0x7bb1e0(void* self, void* a, void* b) {
    real_0x7bf7a0((char*)self+8, a, b, 2);
}
} } }
// REVERSED_FUNCTION: dice_hfe_console_LocalConsole_executeLine_std_string_constref_std_stringref (0x7bb1e0)
