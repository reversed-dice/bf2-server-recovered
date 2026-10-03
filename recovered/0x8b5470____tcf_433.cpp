// FUNCTION: BF2 0x8b5470
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5470() {
    void* g = (void*)0x10d4ec0;
    *(void**)0x010d4ec0 = (void*)0xbfcf10;
    fn_0x00756000(g);
}
} }
