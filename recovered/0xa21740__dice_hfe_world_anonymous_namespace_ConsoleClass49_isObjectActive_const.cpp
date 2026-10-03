// FUNCTION: BF2 0xa21740
namespace dice { namespace hfe {
extern void* fn_00699ea0(unsigned int id);
bool cb_a21740() {
    return fn_00699ea0(*(unsigned int*)0x00c75e74) != 0;
}
} }
