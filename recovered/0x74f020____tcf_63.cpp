// FUNCTION: BF2 0x74f020
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void wrap_0x74f020() {
    *(unsigned long long*)0x010aa4e0 = 0xb9fa30;
    func_0x00756000((void*)0x10aa4e0);
}
} } }
// REVERSED_FUNCTION: __tcf_63 (0x74f020)
