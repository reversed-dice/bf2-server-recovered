// FUNCTION: BF2 0x7d6230
namespace dice { namespace hfe { namespace io {
extern void fn_7d5ea0(void* a, int b);
extern void fn_7d5990(void* a);
void ctor_0x7d6230(void* self) {
    char s[0x30];
    fn_7d5ea0(s, 0x40);
    fn_7d5990(s);
}
} } }
