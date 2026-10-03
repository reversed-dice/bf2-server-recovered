// FUNCTION: BF2 0x74f080
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void wrap_0x74f080() {
    *(unsigned long long*)0x010aa2a0 = 0xb9fd70;
    func_0x00756000((void*)0x10aa2a0);
}
} } }
// REVERSED_FUNCTION: __tcf_65 (0x74f080)
