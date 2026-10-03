// FUNCTION: BF2 0x6382d0
// dice_hfe_world_PhysicsSpring_setIsSleeping
// 23 instructions, 1 vtable call + 1 tail call, gcc34
extern "C" {
extern int* anonymous_namespace_g_forceAwake;

void dice_hfe_world_PhysicsSpring_setIsSleeping(long param_1)
{
    if (*anonymous_namespace_g_forceAwake != 1) {
        *(int*)(param_1 + 0x74) = 0;
        long obj = *(long*)(param_1 + 0x18);
        long vtable = *(long*)obj;
        void (*fn)(long, int, int) = *(void(**)(long, int, int))(vtable + 0xc0);
        fn(obj, 0, 0x800);
        *(int*)(param_1 + 0x270) = 0;
    } else {
        *(int*)(param_1 + 0x74) = *(int*)(param_1 + 0x70);
        long obj = *(long*)(param_1 + 0x18);
        long vtable = *(long*)obj;
        void (*fn)(long, int, int) = *(void(**)(long, int, int))(vtable + 0xc0);
        fn(obj, 0x800, 0);
    }
}

}
