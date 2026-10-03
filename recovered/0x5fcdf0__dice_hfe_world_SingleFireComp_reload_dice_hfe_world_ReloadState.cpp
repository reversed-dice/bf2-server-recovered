// FUNCTION: BF2 0x5fcdf0
namespace dice { namespace hfe { namespace world {
extern void fn_5f53b0(void* a);
extern void fn_5fcd90(void* a, int b);
void reload_0x5fcdf0(void* self, int arg2) {
    fn_5f53b0(self);
    if (arg2 != 2)
        fn_5fcd90(self, 2);
}
} } }
