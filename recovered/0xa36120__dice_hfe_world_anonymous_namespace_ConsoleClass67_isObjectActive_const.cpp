// FUNCTION: BF2 0xa36120
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a36120() {
    return fn_00699ea0(*(unsigned int*)0x00c75d28) != 0;
}
} }
