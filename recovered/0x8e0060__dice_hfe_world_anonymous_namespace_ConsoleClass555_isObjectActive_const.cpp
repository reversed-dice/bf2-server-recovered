// FUNCTION: BF2 0x8e0060
namespace dice { namespace hfe {
extern void* fn_0x00699ee0(unsigned int a, unsigned int b);
bool cb_8e0060() {
    return fn_0x00699ee0(*(unsigned int*)0x00c75df4, *(unsigned int*)0x00c7cfdc) != 0;
}
} }
