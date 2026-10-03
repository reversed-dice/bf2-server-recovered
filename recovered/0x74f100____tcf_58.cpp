// FUNCTION: BF2 0x74f100
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_74f100() {
    void* g = (void*)0x10aaa80;
    *(void**)0x010aaa80 = (void*)0xb9f210;
    fn_0x00756000(g);
}
} }
