// FUNCTION: BF2 0xa31080
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a31080() {
    void* g = (void*)0x111dbc0;
    *(void**)0x0111dbc0 = (void*)0xc563b0;
    fn_0x00756000(g);
}
} }
