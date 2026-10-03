// FUNCTION: BF2 0x97e110
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_97e110() {
    void* g = (void*)0x10fb000;
    *(void**)0x010fb000 = (void*)0xc1af10;
    fn_0x00756000(g);
}
} }
