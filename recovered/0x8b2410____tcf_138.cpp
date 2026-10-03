// FUNCTION: BF2 0x8b2410
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2410() {
    void* g = (void*)0x10e9b00;
    *(void**)0x010e9b00 = (void*)0xbdefb0;
    fn_0x00756000(g);
}
} }
