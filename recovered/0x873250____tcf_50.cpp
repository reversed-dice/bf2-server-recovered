// FUNCTION: BF2 0x873250
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_873250() {
    void* g = (void*)0x10c0020;
    *(void**)0x010c0020 = (void*)0xbc2630;
    fn_0x00756000(g);
}
} }
