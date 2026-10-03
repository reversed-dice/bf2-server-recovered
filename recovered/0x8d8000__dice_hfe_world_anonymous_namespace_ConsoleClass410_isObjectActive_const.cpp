// FUNCTION: BF2 0x8d8000
namespace dice { namespace hfe {
extern void* fn_0x00699ee0(unsigned int a, unsigned int b);
bool cb_8d8000() {
    return fn_0x00699ee0(*(unsigned int*)0x00c75e24, *(unsigned int*)0x00c7d024) != 0;
}
} }
