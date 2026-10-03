// FUNCTION: BF2 0x850f90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850f90() {
    void* g = (void*)0x10b5140;
    *(void**)0x010b5140 = (void*)0xbbf010;
    fn_0x00756000(g);
}
} }
