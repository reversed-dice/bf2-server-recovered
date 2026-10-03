// FUNCTION: BF2 0x8737b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8737b0() {
    void* g = (void*)0x10bcd80;
    *(void**)0x010bcd80 = (void*)0xbc6f50;
    fn_0x00756000(g);
}
} }
