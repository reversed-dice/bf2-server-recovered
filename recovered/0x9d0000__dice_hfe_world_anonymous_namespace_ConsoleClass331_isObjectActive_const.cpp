// FUNCTION: BF2 0x9d0000
namespace dice { namespace hfe {
extern void* fn_0069de30(unsigned int id);
bool cb_9d0000() {
    return fn_0069de30(*(unsigned int*)0x00c7ce90) != 0;
}
} }
