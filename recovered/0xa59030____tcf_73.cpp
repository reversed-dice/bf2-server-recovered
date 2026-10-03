// FUNCTION: BF2 0xa59030
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a59030() {
    void* g = (void*)0x1122e60;
    *(void**)0x01122e60 = (void*)0xc66990;
    fn_0x00756000(g);
}
} }
