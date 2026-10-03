// FUNCTION: BF2 0x990300
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_990300() {
    return fn_00699ea0(*(unsigned int*)0x00c7ce5c) != 0;
}
} }
