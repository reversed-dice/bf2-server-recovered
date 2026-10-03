// FUNCTION: BF2 0x610bf0
namespace dice { namespace hfe { namespace world {
extern void fn_610b10(void* a);
extern void fn_589480(void* a, float b, float c);
void handleVisualUpdate_0x610bf0(void* self, float arg2, float arg3, int arg4) {
    fn_610b10(self);
    fn_589480(self, arg2, arg3);
}
} } }
