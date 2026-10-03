// FUNCTION: BF2 0x5f5460
namespace dice { namespace hfe { namespace world {

struct FireData;

class FireComp {
public:
    unsigned int getBurstSize() const;
private:
    char pad0xc0[0xc0];
    FireData* m_fireData;
};

struct FireData {
    char pad0x60[0x60];
    unsigned int m_burstSize;
};

unsigned int FireComp::getBurstSize() const {
    return m_fireData->m_burstSize;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getBurstSize_const (0x5f5460)