// FUNCTION: BF2 0x6d6610
// dice::hfe::world::IPhysicsNode::~IPhysicsNode() -- 0x6d6610
//
// Rewrites the vtable pointer, asserts the node is the one the physics node
// manager currently reports (vtable slot +0x30 on the global at 0x01140ad0),
// then tail-calls operator delete.
//
// Two things this target forces:
//   - the vtable store goes through memcpy; a plain `*(void**)self = vtbl;`
//     lets GCC sink it below the manager's global load, which the target does
//     first (91.7% -> 100%).
//   - the manager global is referenced as an extern SYMBOL, not as an absolute
//     dereference of 0x01140ad0: the absolute form changes the addressing and
//     drops the score to 80%.

extern "C" void operator_delete(void*);
extern "C" void abort(void);
extern "C" void* memcpy(void*, const void*, unsigned long);

extern "C" void* dice_hfe_world_physicsNodeManager;   // 0x01140ad0

void dtor(void* self)
{
    void* vtable = (void*)0xb93470;
    memcpy(self, &vtable, sizeof(void*));
    void* mgr = dice_hfe_world_physicsNodeManager;
    void** vtbl_ptr = *(void***)mgr;
    void* result = ((void*(*)(void*))vtbl_ptr[0x30/8])(mgr);
    if (result == *((void**)self + 1)) {
        operator_delete(self);
        return;
    }
    abort();
}
// REVERSED_FUNCTION: dice_hfe_world_IPhysicsNode_dtor_IPhysicsNode (0x6d6610)
