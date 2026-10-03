// FUNCTION: BF2 0x5aeed0
// dice_hfe_world_ArmorGLComp_setLastHitBoneIndex_int_bool
// 18 instructions, 1 vtable call, gcc40
extern "C" {
extern long dice_hfe_gameLogic;

void dice_hfe_world_ArmorGLComp_setLastHitBoneIndex_int_bool(
    long self, int index, char force)
{
    if (force == '\0') {
        long gl = dice_hfe_gameLogic;
        long vtable = *(long*)gl;
        char result = (*(char(**)(long))(vtable + 0x278))(gl);
        if (result == '\0') {
            return;
        }
    }
    *(int*)(self + 0x64) = index;
}

}
