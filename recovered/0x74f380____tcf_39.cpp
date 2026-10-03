// FUNCTION: BF2 0x74f380
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_74f380() {
    void* g = (void*)0x10abfe0;
    *(void**)0x010abfe0 = (void*)0xb9d330;
    fn_0x00756000(g);
}
} }
