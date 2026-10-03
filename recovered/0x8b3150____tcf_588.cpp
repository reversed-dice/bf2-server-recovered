// FUNCTION: BF2 0x8b3150
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3150() {
    void* g = (void*)0x10ca060;
    *(void**)0x010ca060 = (void*)0xc0caf0;
    fn_0x00756000(g);
}
} }
