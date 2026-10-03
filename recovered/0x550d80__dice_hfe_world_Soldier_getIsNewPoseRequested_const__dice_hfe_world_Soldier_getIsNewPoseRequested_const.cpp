// FUNCTION: BF2 0x550d80
namespace dice { namespace hfe { namespace world {
  class Soldier {
  public:
    unsigned int m_unk_0x8;
    void* m_unk_0x60;
    unsigned char m_unk_0x6A;
    unsigned int m_unk_0x79;
    unsigned int m_unk_0x8E;
    long * m_unk_0x90;
    char m_unk_0x96;
    unsigned char m_unk_0xA3;
    unsigned char m_unk_0xB1;
    char m_unk_0xB2;
    float m_unk_0xB6;
    void* m_unk_0x258;
    void* m_unk_0x298;
    void* m_unk_0x2A0;
    void* m_unk_0x2B0;
    long * m_unk_0x360;
    long * m_unk_0x370;
    unsigned int m_unk_0x3BC;
    void* m_unk_0x3C8;
    unsigned int m_unk_0x3CC;
    char m_unk_0x48C;
    void* m_unk_0x4A8;
    unsigned char m_unk_0x516;
    char m_unk_0x591;

    bool getIsNewPoseRequested() const;
  };
  bool Soldier::getIsNewPoseRequested() const {
    return *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0x3C8)
        != *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0x3CC);
  }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getIsNewPoseRequested_const (0x550d80)