// FUNCTION: BF2 0xa24850
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a24850() {
    return fn_00699ea0(*(unsigned int*)0x00c75e74) != 0;
}
} }
