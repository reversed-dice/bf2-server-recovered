// FUNCTION: BF2 0x4be540
namespace dice { namespace hfe {

class SpawnPointTemplate {
    char m_pad[0x80];
    float m_spawnPreventionDelay;
public:
    float getSpawnPreventionDelay();
};

float SpawnPointTemplate::getSpawnPreventionDelay() {
    return m_spawnPreventionDelay;
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_getSpawnPreventionDelay (0x4be540)