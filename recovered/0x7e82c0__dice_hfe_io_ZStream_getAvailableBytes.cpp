// FUNCTION: BF2 0x7e82c0
namespace dice { namespace hfe {
extern "C" bool dice_hfe_io_ZReader_eof_const(char*);
bool cb_0x7e82c0(long param_1) {
    if (*(char**)(param_1 + 0x18) != 0 && dice_hfe_io_ZReader_eof_const(*(char**)(param_1 + 0x18)) == 0) {
        return true;
    }
    return false;
}
} }
