// FUNCTION: BF2 0x8e2800
namespace dice { namespace hfe {
extern void* fn_0x00699ee0(unsigned int a, unsigned int b);
bool cb_8e2800() {
    return fn_0x00699ee0(*(unsigned int*)0x00c75da4, *(unsigned int*)0x00c7cfb0) != 0;
}
} }
