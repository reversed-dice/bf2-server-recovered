// FUNCTION: BF2 0x74f040
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void wrap_0x74f040() {
    *(unsigned long long*)0x010aa3c0 = 0xb9fbd0;
    func_0x00756000((void*)0x10aa3c0);
}
} } }
// REVERSED_FUNCTION: __tcf_64 (0x74f040)
