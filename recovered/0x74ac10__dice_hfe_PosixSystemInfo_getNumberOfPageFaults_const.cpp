// FUNCTION: BF2 0x74ac10
namespace dice { namespace hfe {
extern int fn_4072b8(int a, void* b);
int f_0x74ac10() {
    char buf[0x90];
    int r = fn_4072b8(0, buf);
    return r ? 0 : *(int*)(buf + 0x48);
}
} }
