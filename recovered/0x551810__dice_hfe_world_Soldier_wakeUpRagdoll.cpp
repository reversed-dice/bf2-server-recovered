// FUNCTION: BF2 0x551810
extern "C" void dice_anim_RagDoll_wakeUp(void*);
extern "C" void f_551810(char* self) {
    char* p = *(char**)(self + 0x3f0);
    if (p != 0) dice_anim_RagDoll_wakeUp(p);
}
// REVERSED_FUNCTION: dice_hfe_world_Soldier_wakeUpRagdoll (0x551810)
