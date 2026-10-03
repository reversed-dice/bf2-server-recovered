// FUNCTION: BF2 0x8a0d30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0d30() {
    void* g = (void*)0x10c2dc0;
    *(void**)0x010c2dc0 = (void*)0xbd1fd0;
    fn_0x00756000(g);
}
} }
