// FUNCTION: BF2 0x8dd100
namespace dice { namespace hfe {
extern void* fn_0x00699ee0(unsigned int a, unsigned int b);
bool cb_8dd100() {
    return fn_0x00699ee0(*(unsigned int*)0x00c75e14, *(unsigned int*)0x00c7cfec) != 0;
}
} }
