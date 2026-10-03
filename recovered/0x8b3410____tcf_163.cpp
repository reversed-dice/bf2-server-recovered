// FUNCTION: BF2 0x8b3410
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3410() {
    void* g = (void*)0x10e7ee0;
    *(void**)0x010e7ee0 = (void*)0xbe1850;
    fn_0x00756000(g);
}
} }
