// FUNCTION: BF2 0x8b36f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b36f0() {
    void* g = (void*)0x10e63e0;
    *(void**)0x010e63e0 = (void*)0xbe3f50;
    fn_0x00756000(g);
}
} }
