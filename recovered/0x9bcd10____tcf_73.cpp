// FUNCTION: BF2 0x9bcd10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_9bcd10() {
    void* g = (void*)0x1110540;
    *(void**)0x01110540 = (void*)0xc310b0;
    fn_0x00756000(g);
}
} }
