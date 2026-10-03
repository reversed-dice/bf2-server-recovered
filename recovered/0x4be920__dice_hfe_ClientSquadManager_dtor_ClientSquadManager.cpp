// FUNCTION: BF2 0x4be920
namespace dice { namespace hfe {

extern "C" void SquadManager_removeAllSquads(void*);
extern "C" void SquadManager_dtor_SquadManager(void*);
extern "C" void real_operator_delete(void*);
void fn_0x4be920(void* self) {
    *(void**)self = (void*)0xb38170;
    SquadManager_removeAllSquads(self);
    SquadManager_dtor_SquadManager(self);
    real_operator_delete(self);
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_dtor_ClientSquadManager (0x4be920)
