// FUNCTION: BF2 0x9bcc30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_9bcc30() {
    void* g = (void*)0x1110e00;
    *(void**)0x01110e00 = (void*)0xc30470;
    fn_0x00756000(g);
}
} }
