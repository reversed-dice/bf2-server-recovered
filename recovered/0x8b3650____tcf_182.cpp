// FUNCTION: BF2 0x8b3650
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3650() {
    void* g = (void*)0x10e6980;
    *(void**)0x010e6980 = (void*)0xbe3730;
    fn_0x00756000(g);
}
} }
