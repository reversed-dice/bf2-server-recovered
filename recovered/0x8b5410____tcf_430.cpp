// FUNCTION: BF2 0x8b5410
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5410() {
    void* g = (void*)0x10d5220;
    *(void**)0x010d5220 = (void*)0xbfca30;
    fn_0x00756000(g);
}
} }
