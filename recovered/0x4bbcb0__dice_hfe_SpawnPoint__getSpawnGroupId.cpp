// FUNCTION: BF2 0x4bbcb0
namespace dice { namespace hfe {

struct SpawnInfo {
    char _pad_0x00[0x84];
    unsigned int m_field_0x84;
    int m_field_0x88;
};

class SpawnManager {
public:
    virtual void dummy0() = 0;
    virtual void dummy1() = 0;
    virtual void dummy2() = 0;
    virtual void dummy3() = 0;
    virtual void dummy4() = 0;
    virtual void dummy5() = 0;
    virtual void dummy6() = 0;
    virtual void dummy7() = 0;
    virtual void dummy8() = 0;
    virtual void dummy9() = 0;
    virtual void dummy10() = 0;
    virtual void dummy11() = 0;
    virtual void dummy12() = 0;
    virtual void dummy13() = 0;
    virtual void dummy14() = 0;
    virtual void dummy15() = 0;
    virtual void dummy16() = 0;
    virtual unsigned long long getSpawnGroupId(int, unsigned int) = 0;
};

extern SpawnManager* spawnManager;

class SpawnPoint {
public:
    unsigned int m_unk_0x44;
    unsigned int m_unk_0x46;
    unsigned int m_unk_0x47;
    unsigned int m_unk_0x48;
    unsigned int m_unk_0x49;
    void* m_unk_0x50;
    char _pad[0x200];
    int m_unk_0x220;
    SpawnInfo* m_spawnInfo;
    float m_unk_0x230;
    unsigned int m_unk_0x234;
    float m_unk_0x238;
    unsigned char m_unk_0x23C;
    unsigned int m_unk_0x244;
    unsigned char m_unk_0x24C;
    unsigned char m_unk_0x24D;
    unsigned char m_unk_0x24E;

    unsigned long long getSpawnGroupId() const;
};

unsigned long long SpawnPoint::getSpawnGroupId() const {
    int val = m_spawnInfo->m_field_0x88;
    if (val != -1) {
        return spawnManager->getSpawnGroupId(val, m_spawnInfo->m_field_0x84);
    }
    return m_unk_0x234;
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint::getSpawnGroupId (0x4bbcb0)