// FUNCTION: BF2 0xa23c00
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a23c00() {
    return fn_00699ea0(*(unsigned int*)0x00c75e74) != 0;
}
} }
