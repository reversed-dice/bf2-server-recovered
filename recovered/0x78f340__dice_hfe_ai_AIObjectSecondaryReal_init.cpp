// FUNCTION: BF2 0x78f340
namespace dice { namespace hfe { namespace ai {
extern bool fn_78c300(void* a);
extern void fn_78e6d0(void* a);
void init_0x78f340(void* self) {
    if (!fn_78c300(self))
        fn_78e6d0(self);
}
} } }
