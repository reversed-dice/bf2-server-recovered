// FUNCTION: BF2 0x818ae0
namespace dice {
extern void* fn_817b70(void* a);
extern void fn_817e70(void* a);
bool ghttpRequestThink_0x818ae0(void* self) {
    void* p = fn_817b70(self);
    if (!p)
        return false;
    fn_817e70(p);
    return true;
}
}
