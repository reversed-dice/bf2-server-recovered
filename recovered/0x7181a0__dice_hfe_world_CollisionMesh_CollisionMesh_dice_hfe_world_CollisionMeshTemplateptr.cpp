// FUNCTION: BF2 0x7181a0
namespace dice { namespace hfe { namespace world {
extern void fn_6d6480(void* self);
void cb_7181a0(void* self, void* arg) {
    fn_6d6480(self);
    *(void**)((char*)self + 0x18) = arg;
    *(void**)((char*)self + 0x0) = (void*)0xb97710;
    *(int*)((char*)self + 0x10) = 1;
    *(char*)((char*)self + 0x20) = 1;
    *(int*)((char*)self + 0x24) = 0;
    *(char*)((char*)self + 0x28) = 0;
    *(int*)((char*)self + 0x2c) = 0;
    *(char*)((char*)self + 0x30) = 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMeshTemplate_CollisionMeshTemplate (0x7181a0)
