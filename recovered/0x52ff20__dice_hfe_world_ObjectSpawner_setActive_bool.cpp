// FUNCTION: BF2 0x52ff20
namespace dice { namespace hfe { namespace world {

extern "C" void dice_hfe_world_ObjectSpawner_calcSpawnDelay(void*);
void fn_0x52ff20(void* self, bool val) {
    float v = *(float*)((char*)self+0x29c);
    *((char*)self+0x2b8) = val;
    if (v != 0.0f) {
        dice_hfe_world_ObjectSpawner_calcSpawnDelay(self);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawner_setActive_bool (0x52ff20)
