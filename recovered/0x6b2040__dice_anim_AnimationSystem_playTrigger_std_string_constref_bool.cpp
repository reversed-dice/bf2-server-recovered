// FUNCTION: BF2 0x6b2040
// playTrigger - 41 ins, 1 CALL + 1 JMP
extern "C" long dice_anim_TriggerManager_getTriggerByName_std_string_constref_bool_const(long, long, int);
extern "C" void dice_anim_AnimationSystem_stopAllPlaying(long);

extern "C" int dice_anim_AnimationSystem_playTrigger_std_string_constref_bool(
    long self, long triggerName, char force)
{
    if (*(char*)(self + 0x72) != 0) return 0;
    long mgr = *(long*)(*(long*)(self + 0x50) + 8);
    long trigger = dice_anim_TriggerManager_getTriggerByName_std_string_constref_bool_const(mgr, triggerName, 0);
    if (trigger == 0) return 0;
    if (force != 0) {
        dice_anim_AnimationSystem_stopAllPlaying(self);
    }
    long vtbl = *(long*)trigger;
    ((void(*)(long, long))(*(long*)(vtbl + 0x98)))(trigger, self);
    *(char*)(self + 0x73) = 1;
    *(char*)(self + 0x72) = force;
    return 1;
}