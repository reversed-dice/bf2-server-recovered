// FUNCTION: BF2 0x98d850
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_98d850() {
    return fn_00699ea0(*(unsigned int*)0x00c75cbc) != 0;
}
} }
