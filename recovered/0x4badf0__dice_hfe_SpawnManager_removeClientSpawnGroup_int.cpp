// FUNCTION: BF2 0x4badf0
namespace dice { namespace hfe {
extern "C" void dice_hfe_SpawnManager_removeGroup_int_bool(void*, int, bool);
void fn_0x4badf0(void* self, int id) {
    dice_hfe_SpawnManager_removeGroup_int_bool(self, id, true);
}
} }
// REVERSED_FUNCTION: dice_hfe_SpawnManager_removeClientSpawnGroup_int (0x4badf0)
