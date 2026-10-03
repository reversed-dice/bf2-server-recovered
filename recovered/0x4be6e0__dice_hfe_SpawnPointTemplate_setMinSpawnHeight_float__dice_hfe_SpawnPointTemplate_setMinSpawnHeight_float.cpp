// FUNCTION: BF2 0x4be6e0
namespace dice { namespace hfe {

class SpawnPointTemplate {
    unsigned char _pad[0x90];
    float m_minSpawnHeight;
public:
    void setMinSpawnHeight(float val);
};

void SpawnPointTemplate::setMinSpawnHeight(float val) {
    m_minSpawnHeight = val;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setMinSpawnHeight_float (0x4be6e0)