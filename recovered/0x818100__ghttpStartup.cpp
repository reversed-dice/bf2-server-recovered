// FUNCTION: BF2 0x818100
namespace dice { namespace hfe {
extern void fn_816fc0();
extern void fn_816fd0();
extern void fn_816fa0();
void ghttpStartup_0x818100() {
    fn_816fc0();
    int n = *(int*)0x10b07d8 + 1;
    *(int*)0x10b07d8 = n;
    if (n - 1 == 0) {
        fn_816fa0();
        *(int*)0xf69214 = 0x7d;
        *(int*)0xf69210 = 0xfa;
        return;
    }
    fn_816fd0();
}
} }
