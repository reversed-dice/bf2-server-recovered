// FUNCTION: BF2 0x5f5410
namespace dice { namespace hfe { namespace world {

struct FireData;

class FireComp {
public:
    unsigned int getFireInput() const;
private:
    char pad0xc0[0xc0];
    FireData* m_fireData;
};

struct FireData {
    char pad0x60[0x60];
    unsigned int m_burstSize;
    unsigned int m_fireInput;
};

unsigned int FireComp::getFireInput() const {
    return m_fireData->m_fireInput;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getFireInput_const (0x5f5410)