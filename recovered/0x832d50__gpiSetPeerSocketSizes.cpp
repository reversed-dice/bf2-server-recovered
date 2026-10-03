// FUNCTION: BF2 0x832d50
namespace dice { namespace hfe {
extern void fn_83eff0(int a, int b);
extern void fn_83f020(int a, int b);
extern void fn_83f050(int a);
extern void fn_83f090(int a);
void gpiSetPeerSocketSizes_0x832d50(int arg1) {
    fn_83eff0(arg1, 0x4000);
    fn_83eff0(arg1, 0x8000);
    fn_83eff0(arg1, 0x10000);
    fn_83eff0(arg1, 0x20000);
    fn_83eff0(arg1, 0x40000);
    fn_83f020(arg1, 0x4000);
    fn_83f020(arg1, 0x8000);
    fn_83f020(arg1, 0x10000);
    fn_83f050(arg1);
    fn_83f090(arg1);
}
} }
