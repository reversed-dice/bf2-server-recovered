// FUNCTION: BF2 0x74f400
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_74f400() {
    void* g = (void*)0x10abb60;
    *(void**)0x010abb60 = (void*)0xb9d9b0;
    fn_0x00756000(g);
}
} }
