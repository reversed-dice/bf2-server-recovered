// FUNCTION: BF2 0x6cd330
namespace dice { namespace anim {

void fn_0x6cd330(void* self) {
    void* v = *(void**)((char*)self+0x48);
    if (v) {
        void** g = *(void***)0x10a3140;
        g[6] = v;
    }
}

} }
// REVERSED_FUNCTION: dice_anim_MovementTrigger_activate (0x6cd330)
