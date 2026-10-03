// FUNCTION: BF2 0x60c3b0
namespace dice { namespace hfe { namespace world {

class RecoilComp {
public:
    char _pad_0[48];         // offset 0x00-0x2f
    char m_recoilBuffer[32]; // offset 0x30-0x4f

    const char* getRandomRecoilForceLeftRight() const;
};

const char* RecoilComp::getRandomRecoilForceLeftRight() const {
    return m_recoilBuffer;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RecoilComp_getRandomRecoilForceLeftRight_const (0x60c3b0)