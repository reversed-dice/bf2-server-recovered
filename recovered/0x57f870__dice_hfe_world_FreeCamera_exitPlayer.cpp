// FUNCTION: BF2 0x57f870
// dice::hfe::world::FreeCamera::exitPlayer() -- 0x57f870
//
// Drops the reference held at +0x428 (refcount decrement, delete on zero),
// clears the slot, then tail-calls the base implementation through the vtable
// at +0x398.

extern "C" void operatorDelete_57f870(void*);

typedef void (*FnBase_57f870)(void*);
// may_alias: the slot store must stay ahead of the vtable load, which GCC
// otherwise hoists above it
typedef void* __attribute__((may_alias)) voidp_ma_57f870;

extern "C" void exitPlayer_57f870(char* self)
{
    int* ref = *(int**)(self + 0x428);
    if (ref != 0) {
        if (--*ref == 0) operatorDelete_57f870(ref);
    }
    *(voidp_ma_57f870*)(self + 0x428) = 0;
    (*(FnBase_57f870*)(*(char**)self + 0x398))(self);
}
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_exitPlayer (0x57f870)
