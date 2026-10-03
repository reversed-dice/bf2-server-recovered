// FUNCTION: BF2 0x6d6670
// IPhysicsNode_dtor (0x6d6670 version)
// 11 ins, 1 vtable call + 1 conditional call, gcc34
extern "C" {
extern long dice_hfe_world_physicsNodeManager;
extern void abort();

void IPhysicsNode_dtor(long *self)
{
    *self = 0xb93470;
    long mgr = dice_hfe_world_physicsNodeManager;
    long vtable = *(long*)mgr;
    long (*fn)(long) = *(long(**)(long))(vtable + 0x30);
    long result = fn(mgr);
    if (result == self[1]) {
        return;
    }
    abort();
}

}
