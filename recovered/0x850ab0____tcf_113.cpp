// FUNCTION: BF2 0x850ab0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850ab0() {
    void* g = (void*)0x10b4720;
    *(void**)0x010b4720 = (void*)0xbbfeb0;
    fn_0x00756000(g);
}
} }
