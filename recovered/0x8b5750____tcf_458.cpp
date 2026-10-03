// FUNCTION: BF2 0x8b5750
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5750() {
    void* g = (void*)0x10d32a0;
    *(void**)0x010d32a0 = (void*)0xbff7b0;
    fn_0x00756000(g);
}
} }
