// FUNCTION: BF2 0x8b3230
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3230() {
    void* g = (void*)0x10e90e0;
    *(void**)0x010e90e0 = (void*)0xbdfe50;
    fn_0x00756000(g);
}
} }
