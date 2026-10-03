// FUNCTION: BF2 0x8b5270
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5270() {
    void* g = (void*)0x10d61e0;
    *(void**)0x010d61e0 = (void*)0xbfb370;
    fn_0x00756000(g);
}
} }
