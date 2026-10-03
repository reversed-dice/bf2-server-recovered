// FUNCTION: BF2 0x8b4370
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4370() {
    void* g = (void*)0x10defa0;
    *(void**)0x010defa0 = (void*)0xbee6b0;
    fn_0x00756000(g);
}
} }
