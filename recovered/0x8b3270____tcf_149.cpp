// FUNCTION: BF2 0x8b3270
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3270() {
    void* g = (void*)0x10e8ea0;
    *(void**)0x010e8ea0 = (void*)0xbe0190;
    fn_0x00756000(g);
}
} }
