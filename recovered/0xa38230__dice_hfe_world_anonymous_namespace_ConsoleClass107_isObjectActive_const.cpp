// FUNCTION: BF2 0xa38230
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a38230() {
    return fn_00699ea0(*(unsigned int*)0x00c75d18) != 0;
}
} }
