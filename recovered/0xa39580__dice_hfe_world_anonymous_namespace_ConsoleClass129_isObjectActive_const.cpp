// FUNCTION: BF2 0xa39580
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a39580() {
    return fn_00699ea0(*(unsigned int*)0x00c75d18) != 0;
}
} }
