// FUNCTION: BF2 0x532940
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
    unsigned char _pad0[0x214]; // offset 0x000
    float m_maxSpawnDelay;      // offset 0x214
public:
    void setMaxSpawnDelay(float delay);
};

void ObjectSpawnerTemplate::setMaxSpawnDelay(float delay) {
    m_maxSpawnDelay = delay;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setMaxSpawnDelay_float (0x532940)