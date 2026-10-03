// FUNCTION: BF2 0x8b28d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b28d0() {
    void* g = (void*)0x10c8680;
    *(void**)0x010c8680 = (void*)0xc0f050;
    fn_0x00756000(g);
}
} }
