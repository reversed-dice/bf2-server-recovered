// FUNCTION: BF2 0x5f3380
// dice::hfe::world::ExplosivesFireComp::enable() -- 0x5f3380
//
// When the arm-time at +0x164 has elapsed, completes the fire states, then
// runs the base enable through vtable +0x130, clears the flag at +0x1ac and
// tail-calls showDetonator with (mode == 2).

extern "C" unsigned getTickCount_5f3380();
extern "C" void fireCompleteUpdateStates_5f3380(void*);
extern "C" void showDetonator_5f3380(void*, bool);

typedef void (*FnBase_5f3380)(void*);

extern "C" void enable_5f3380(char* self)
{
    unsigned armTime = *(unsigned*)(self + 0x164);
    if (armTime != 0) {
        if (armTime <= getTickCount_5f3380())
            fireCompleteUpdateStates_5f3380(self);
    }
    (*(FnBase_5f3380*)(*(char**)self + 0x130))(self);
    *(char*)(self + 0x1ac) = 0;
    showDetonator_5f3380(self, *(int*)(self + 0x170) == 2);
}
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_enable (0x5f3380)
