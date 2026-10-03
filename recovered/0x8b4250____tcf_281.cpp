// FUNCTION: BF2 0x8b4250
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4250() {
    void* g = (void*)0x10df9c0;
    *(void**)0x010df9c0 = (void*)0xbed810;
    fn_0x00756000(g);
}
} }
