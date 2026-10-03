// FUNCTION: BF2 0x8b3910
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3910() {
    void* g = (void*)0x10e50c0;
    *(void**)0x010e50c0 = (void*)0xbe5af0;
    fn_0x00756000(g);
}
} }
