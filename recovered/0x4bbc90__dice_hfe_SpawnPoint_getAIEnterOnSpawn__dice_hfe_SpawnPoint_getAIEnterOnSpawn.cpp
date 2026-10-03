// FUNCTION: BF2 0x4bbc90
namespace dice { namespace hfe {

struct SpawnInfo {
    unsigned char pad0[0x8e]; // offset 0x00-0x8d
    unsigned char m_aiEnterOnSpawn; // offset 0x8e
};

class SpawnPoint {
public:
    unsigned char getAIEnterOnSpawn() const;
private:
    unsigned char pad1[0x228]; // offset 0x00-0x227
    SpawnInfo* m_spawnInfo; // offset 0x228
};

unsigned char SpawnPoint::getAIEnterOnSpawn() const {
    return m_spawnInfo->m_aiEnterOnSpawn;
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_getAIEnterOnSpawn (0x4bbc90)