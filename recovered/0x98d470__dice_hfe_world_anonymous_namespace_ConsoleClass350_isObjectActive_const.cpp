// FUNCTION: BF2 0x98d470
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_98d470() {
    return fn_00699ea0(*(unsigned int*)0x00c75cbc) != 0;
}
} }
