// FUNCTION: BF2 0x8b4430
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4430() {
    void* g = (void*)0x10de7c0;
    *(void**)0x010de7c0 = (void*)0xbef210;
    fn_0x00756000(g);
}
} }
