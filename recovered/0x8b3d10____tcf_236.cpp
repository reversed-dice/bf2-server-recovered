// FUNCTION: BF2 0x8b3d10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3d10() {
    void* g = (void*)0x10e2c80;
    *(void**)0x010e2c80 = (void*)0xbe8ef0;
    fn_0x00756000(g);
}
} }
