// FUNCTION: BF2 0x990380
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_990380() {
    return fn_00699ea0(*(unsigned int*)0x00c7ce5c) != 0;
}
} }
