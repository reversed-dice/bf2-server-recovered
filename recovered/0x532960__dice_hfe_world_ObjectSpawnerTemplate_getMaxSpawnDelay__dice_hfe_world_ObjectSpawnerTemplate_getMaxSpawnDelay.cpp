// FUNCTION: BF2 0x532960
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    float getMaxSpawnDelay() const;
};

float ObjectSpawnerTemplate::getMaxSpawnDelay() const {
    return *(float*)((unsigned char*)this + 0x214);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getMaxSpawnDelay (0x532960)