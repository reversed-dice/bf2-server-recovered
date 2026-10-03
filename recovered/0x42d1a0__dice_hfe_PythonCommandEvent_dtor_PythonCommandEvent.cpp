// FUNCTION: BF2 0x42d1a0
namespace dice { namespace hfe {
extern void gameEvent_dtor(void*);

void cb_42d1a0(void* self) {
    *(void**)self = (void*)0xb2d970;
    gameEvent_dtor(self);
}

} }
// REVERSED_FUNCTION: dice_hfe_PythonCommandEvent_dtor_PythonCommandEvent (0x42d1a0)
