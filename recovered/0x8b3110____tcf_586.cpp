// FUNCTION: BF2 0x8b3110
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3110() {
    void* g = (void*)0x10ca2a0;
    *(void**)0x010ca2a0 = (void*)0xc0c7b0;
    fn_0x00756000(g);
}
} }
