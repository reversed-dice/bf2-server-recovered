// FUNCTION: BF2 0x8b4410
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4410() {
    void* g = (void*)0x10de8e0;
    *(void**)0x010de8e0 = (void*)0xbef070;
    fn_0x00756000(g);
}
} }
