// FUNCTION: BF2 0x9bcbf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_9bcbf0() {
    void* g = (void*)0x1111080;
    *(void**)0x01111080 = (void*)0xc300f0;
    fn_0x00756000(g);
}
} }
