// FUNCTION: BF2 0x850eb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850eb0() {
    void* g = (void*)0x10b5920;
    *(void**)0x010b5920 = (void*)0xbbe4b0;
    fn_0x00756000(g);
}
} }
