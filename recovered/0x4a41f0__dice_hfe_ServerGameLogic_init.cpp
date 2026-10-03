// FUNCTION: BF2 0x4a41f0
namespace dice { namespace hfe {
extern void fn_7c76a0(void* a);
extern void fn_4754a0(void* a);
extern void* g_10aebe8;
bool init_0x4a41f0(void* self) {
    fn_7c76a0(g_10aebe8);
    fn_4754a0(self);
    return 1;
}
} }
