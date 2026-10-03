// FUNCTION: BF2 0xa24b10
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a24b10() {
    return fn_00699ea0(*(unsigned int*)0x00c75e54) != 0;
}
} }
