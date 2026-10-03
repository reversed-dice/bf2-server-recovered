// FUNCTION: BF2 0x78f970
namespace dice { namespace hfe { namespace ai {
extern bool fn_78c300(void* a);
extern void fn_790430(void* a);
void init_0x78f970(void* self) {
    if (!fn_78c300(self))
        fn_790430(self);
}
} } }
