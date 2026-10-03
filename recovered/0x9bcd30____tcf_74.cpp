// FUNCTION: BF2 0x9bcd30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_9bcd30() {
    void* g = (void*)0x1110400;
    *(void**)0x01110400 = (void*)0xc31270;
    fn_0x00756000(g);
}
} }
