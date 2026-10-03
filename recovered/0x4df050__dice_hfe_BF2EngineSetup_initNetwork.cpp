// FUNCTION: BF2 0x4df050
namespace dice { namespace hfe {
extern void* fn_407508(unsigned long size);
extern void fn_7c7440(void* p);
extern void* fn_850820();
int cb_4df050() {
    void* p = fn_407508(0x188);
    fn_7c7440(p);
    *(void**)0x010aebe8 = p;
    if (p == 0)
        return 0;
    if (fn_850820() == 0)
        return 0;
    return 1;
}
} }
// REVERSED_FUNCTION: dice_hfe_BF2EngineSetup_initNetwork (0x4df050)
