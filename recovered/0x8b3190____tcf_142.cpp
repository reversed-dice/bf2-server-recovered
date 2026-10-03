// FUNCTION: BF2 0x8b3190
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3190() {
    void* g = (void*)0x10e9680;
    *(void**)0x010e9680 = (void*)0xbdf630;
    fn_0x00756000(g);
}
} }
