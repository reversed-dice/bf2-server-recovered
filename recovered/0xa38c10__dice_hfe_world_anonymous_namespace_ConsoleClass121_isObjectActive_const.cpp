// FUNCTION: BF2 0xa38c10
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a38c10() {
    return fn_00699ea0(*(unsigned int*)0x00c75d18) != 0;
}
} }
