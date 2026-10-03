// FUNCTION: BF2 0x4be700
namespace dice { namespace hfe {

class SpawnPointTemplate {
public:
    float getMinSpawnHeight() const;
private:
    void* vftable;                  // 0x00
    unsigned char _pad[0x88];       // 0x08-0x8F
    float m_minSpawnHeight;         // 0x90
};

float SpawnPointTemplate::getMinSpawnHeight() const {
    return m_minSpawnHeight;
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_getMinSpawnHeight_const (0x4be700)