// FUNCTION: BF2 0x8b2090
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2090() {
    void* g = (void*)0x10ebbc0;
    *(void**)0x010ebbc0 = (void*)0xbdc090;
    fn_0x00756000(g);
}
} }
