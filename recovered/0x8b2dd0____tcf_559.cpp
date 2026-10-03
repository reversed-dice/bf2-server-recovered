// FUNCTION: BF2 0x8b2dd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2dd0() {
    void* g = (void*)0x10cc100;
    *(void**)0x010cc100 = (void*)0xc09bd0;
    fn_0x00756000(g);
}
} }
