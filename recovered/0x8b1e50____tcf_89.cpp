// FUNCTION: BF2 0x8b1e50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1e50() {
    void* g = (void*)0x10ed240;
    *(void**)0x010ed240 = (void*)0xbda010;
    fn_0x00756000(g);
}
} }
