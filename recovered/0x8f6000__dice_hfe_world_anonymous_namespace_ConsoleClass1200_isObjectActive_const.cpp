// FUNCTION: BF2 0x8f6000
namespace dice { namespace hfe {
extern void* fn_0069de30(unsigned int id);
bool cb_8f6000() {
    return fn_0069de30(*(unsigned int*)0x00c7cedc) != 0;
}
} }
