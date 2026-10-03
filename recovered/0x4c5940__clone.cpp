// FUNCTION: BF2 0x4c5940
namespace dice { namespace hfe {
extern void* fn_817b70(void* a);
extern void fn_817610(void* a);
void ghttpCancelRequest_0x818b10(void* self) {
    void* p = fn_817b70(self);
    if (p)
        fn_817610(p);
}
} }
