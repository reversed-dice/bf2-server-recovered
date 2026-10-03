// FUNCTION: BF2 0xa3a000
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a3a000() {
    return fn_00699ea0(*(unsigned int*)0x00c75ce8) != 0;
}
} }
